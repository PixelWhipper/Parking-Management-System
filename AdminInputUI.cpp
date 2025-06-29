#include "AdminInputUI.h"
#include "ui_AdminInputUI.h"
#include <QCloseEvent>
#include <QMessageBox>

AdminInputUI::AdminInputUI(QWidget *parent)
    : QWidget(parent), ui(new Ui::AdminInputUI)
{
    ui->setupUi(this);
    connect(ui->saveButton, &QPushButton::clicked, this, &AdminInputUI::on_saveButton_clicked);
    connect(ui->addCustomRateButton, &QPushButton::clicked, this, &AdminInputUI::on_addCustomRateButton_clicked);
    connect(ui->editCustomRateButton, &QPushButton::clicked, this, &AdminInputUI::on_editCustomRateButton_clicked);
    connect(ui->deleteCustomRateButton, &QPushButton::clicked, this, &AdminInputUI::on_deleteCustomRateButton_clicked);
}

AdminInputUI::~AdminInputUI()
{
    delete ui;
}

void AdminInputUI::on_saveButton_clicked()
{
    if (!validateInput()) {
        return;
    }

    QString name = ui->nameEdit->text();
    QString location = ui->locationEdit->text();

    double carRate = ui->rateCar->value();
    int carCapacity = ui->capacityCar->value();

    double bikeRate = ui->rateBike->value();
    int bikeCapacity = ui->capacityBike->value();

    double busRate = ui->rateBus->value();
    int busCapacity = ui->capacityBus->value();

    double minivanRate = ui->rateMinivan->value();
    int minivanCapacity = ui->capacityMinivan->value();

    int handicappedSpots = ui->handicappedSpotsSpinBox->value();

    QMessageBox::information(this, "Success",
                             QString("Parking lot '%1' saved successfully!\n"
                                     "Location: %2\n"
                                     "Car Rate: NPR %3/hr (Capacity: %4)\n"
                                     "Bike Rate: NPR %5/hr (Capacity: %6)\n"
                                     "Bus Rate: NPR %7/hr (Capacity: %8)\n"
                                     "Minivan Rate: NPR %9/hr (Capacity: %10)\n"
                                     "Handicapped Spots: %11")
                                 .arg(name, location)
                                 .arg(carRate).arg(carCapacity)
                                 .arg(bikeRate).arg(bikeCapacity)
                                 .arg(busRate).arg(busCapacity)
                                 .arg(minivanRate).arg(minivanCapacity)
                                 .arg(handicappedSpots));

    clearForm();
}

void AdminInputUI::on_addCustomRateButton_clicked()
{
    QString vehicleType = ui->customVehicleName->text().trimmed();
    double customRate = ui->customRate->value();
    int customCapacity = ui->customCapacity->value();

    if (vehicleType.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a vehicle type.");
        return;
    }

    if (customRate <= 0) {
        QMessageBox::warning(this, "Input Error", "Please enter a valid rate.");
        return;
    }

    QString listItem = QString("%1 - NPR %2/hr (Capacity: %3)")
                           .arg(vehicleType)
                           .arg(customRate)
                           .arg(customCapacity);

    ui->customVehicleList->addItem(listItem);

    ui->customVehicleName->clear();
    ui->customRate->setValue(0);
    ui->customCapacity->setValue(0);
}

void AdminInputUI::on_editCustomRateButton_clicked()
{
    int currentRow = ui->customVehicleList->currentRow();
    if (currentRow < 0) {
        QMessageBox::information(this, "No Selection", "Please select an item to edit.");
        return;
    }

    // Get the selected item text and populate the input fields
    QString itemText = ui->customVehicleList->currentItem()->text();

    // Simple parsing - you might want to make this more robust
    QStringList parts = itemText.split(" - NPR ");
    if (parts.size() >= 2) {
        ui->customVehicleName->setText(parts[0]);

        QStringList rateParts = parts[1].split("/hr");
        if (rateParts.size() >= 1) {
            ui->customRate->setValue(rateParts[0].toDouble());
        }
    }

    delete ui->customVehicleList->takeItem(currentRow);
}

void AdminInputUI::on_deleteCustomRateButton_clicked()
{
    int currentRow = ui->customVehicleList->currentRow();
    if (currentRow < 0) {
        QMessageBox::information(this, "No Selection", "Please select an item to delete.");
        return;
    }

    delete ui->customVehicleList->takeItem(currentRow);
}

bool AdminInputUI::validateInput()
{
    if (ui->nameEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a parking lot name.");
        return false;
    }

    if (ui->locationEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a location.");
        return false;
    }

    return true;
}

void AdminInputUI::clearForm()
{
    ui->nameEdit->clear();
    ui->locationEdit->clear();
    ui->rateCar->setValue(0);
    ui->capacityCar->setValue(0);
    ui->rateBike->setValue(0);
    ui->capacityBike->setValue(0);
    ui->rateBus->setValue(0);
    ui->capacityBus->setValue(0);
    ui->rateMinivan->setValue(0);
    ui->capacityMinivan->setValue(0);
    ui->handicappedSpotsSpinBox->setValue(0);
    ui->customVehicleName->clear();
    ui->customRate->setValue(0);
    ui->customCapacity->setValue(0);
    ui->customVehicleList->clear();
}

void AdminInputUI::closeEvent(QCloseEvent *event)
{
    emit finished(); // Emit the finished signal whe
    event->accept();
}
