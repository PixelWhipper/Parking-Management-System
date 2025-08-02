#include "vehicleaddentry.h"
#include "ui_vehicleaddentry.h"
#include <QMessageBox>
#include <QDebug>

AddVehicle::AddVehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddVehicle)
{
    ui->setupUi(this);


    connect(ui->addEntryConfirmButton, &QPushButton::clicked, this, &AddVehicle::on_addEntryConfirmButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &AddVehicle::on_cancelButton_clicked);


    ui->entryTimeDateTimeEdit->setDateTime(QDateTime::currentDateTime());
}

AddVehicle::~AddVehicle()
{
    delete ui;
}

void AddVehicle::on_addEntryConfirmButton_clicked()
{

    QString vehicleNumber = ui->vehicleNumberEdit->text();
    QString vehicleType = ui->vehicleTypeComboBox->currentText();
    QString ownerName = ui->ownerNameEdit->text();
    QString phoneNumber = ui->phoneNumberEdit->text();
    QString assignedSlot = ui->slotNumberEdit->text();
    QDateTime entryTime = ui->entryTimeDateTimeEdit->dateTime();
    bool isHandicapped = ui->handicappedCheckBox->isChecked();

    if (vehicleNumber.isEmpty() || vehicleType.isEmpty() || assignedSlot.isEmpty()) {
        QMessageBox::warning(this, "Missing Information", "Please fill in Vehicle Number, Vehicle Type, and Assigned Slot.");
        return;
    }

    emit vehicleEntryAdded(vehicleNumber, vehicleType, ownerName, phoneNumber, assignedSlot, entryTime, isHandicapped);
    accept();
}

void AddVehicle::on_cancelButton_clicked(){
    reject();
}
