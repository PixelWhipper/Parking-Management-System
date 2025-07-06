#include "AdminInputUI.h"
#include <QMessageBox>
#include <QRegularExpression>

AdminInputUI::AdminInputUI(ParkingLotData* data, QWidget* parent)
    : QWidget(parent), ui(new Ui::AdminInputUI), parkingData(data) {
    ui->setupUi(this);
    setupConnections();
}

void AdminInputUI::setupConnections() {
    connect(ui->addCustomRateButton, &QPushButton::clicked, this, &AdminInputUI::onAddCustomVehicle);
    connect(ui->editCustomRateButton, &QPushButton::clicked, this, &AdminInputUI::onEditCustomVehicle);
    connect(ui->deleteCustomRateButton, &QPushButton::clicked, this, &AdminInputUI::onDeleteCustomVehicle);
    connect(ui->customVehicleList, &QListWidget::itemClicked, this, &AdminInputUI::onLoadCustomVehicle);
    connect(ui->saveButton, &QPushButton::clicked, this, &AdminInputUI::onSaveParkingLot);
}

void AdminInputUI::onAddCustomVehicle() {
    QString name = ui->customVehicleName->text().trimmed();
    double rate = ui->customRate->value();
    int capacity = ui->customCapacity->value();

    if (name.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Vehicle name cannot be empty.");
        return;
    }

    for (int i = 0; i < ui->customVehicleList->count(); ++i) {
        if (ui->customVehicleList->item(i)->text().startsWith(name + ":")) {
            QMessageBox::warning(this, "Duplicate", "Vehicle already exists.");
            return;
        }
    }

    QString text = QString("%1: NPR %2/hr, Capacity: %3").arg(name).arg(rate, 0, 'f', 2).arg(capacity);`
    ui->customVehicleList->addItem(text);
    clearCustomVehicleInputs();
}

void AdminInputUI::onEditCustomVehicle() {
    QListWidgetItem* item = ui->customVehicleList->currentItem();
    if (!item) {
        QMessageBox::warning(this, "Selection Error", "Select an item to edit.");
        return;
    }

    QString name = ui->customVehicleName->text().trimmed();
    double rate = ui->customRate->value();
    int capacity = ui->customCapacity->value();

    item->setText(QString("%1: NPR %2/hr, Capacity: %3").arg(name).arg(rate, 0, 'f', 2).arg(capacity));
    clearCustomVehicleInputs();
}

void AdminInputUI::onDeleteCustomVehicle() {
    QListWidgetItem* item = ui->customVehicleList->takeItem(ui->customVehicleList->currentRow());
    delete item;
    clearCustomVehicleInputs();
}

void AdminInputUI::onLoadCustomVehicle(QListWidgetItem* item) {
    QRegularExpression re("^(.+): NPR ([\\d.]+)/hr, Capacity: (\\d+)$");
    auto match = re.match(item->text());
    if (match.hasMatch()) {
        ui->customVehicleName->setText(match.captured(1));
        ui->customRate->setValue(match.captured(2).toDouble());
        ui->customCapacity->setValue(match.captured(3).toInt());
    }
}

void AdminInputUI::clearCustomVehicleInputs() {
    ui->customVehicleName->clear();
    ui->customRate->setValue(0.0);
    ui->customCapacity->setValue(0);
}

void AdminInputUI::onSaveParkingLot() {
    parkingData->name = ui->nameEdit->text();
    parkingData->location = ui->locationEdit->text();
    parkingData->handicappedSpots = ui->handicappedSpotsSpinBox->value();

    parkingData->rates["Car"] = {ui->rateCar->value(), ui->capacityCar->value()};
    parkingData->rates["Bike"] = {ui->rateBike->value(), ui->capacityBike->value()};
    parkingData->rates["Bus"] = {ui->rateBus->value(), ui->capacityBus->value()};
    parkingData->rates["Minivan"] = {ui->rateMinivan->value(), ui->capacityMinivan->value()};

    for (int i = 0; i < ui->customVehicleList->count(); ++i) {
        QString entry = ui->customVehicleList->item(i)->text();
        QRegularExpression re("^(.+): NPR ([\\d.]+)/hr, Capacity: (\\d+)$");
        auto match = re.match(entry);
        if (match.hasMatch()) {
            QString type = match.captured(1);
            double rate = match.captured(2).toDouble();
            int capacity = match.captured(3).toInt();
            parkingData->rates[type] = {rate, capacity};
        }
    }

    QMessageBox::information(this, "Saved", "Parking lot information saved.");

    // Show next window
    NextWindow* next = new NextWindow(parkingData);
    next->show();
    this->close();
}
