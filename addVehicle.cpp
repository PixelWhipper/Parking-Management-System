#include "addVehicle.h"    // Your custom dialog header
#include "ui_addvehicle.h" // Crucial include for the generated UI code (from addVehicle.ui)
#include "vehicledata.h"   // <--- NEW: Include the shared VehicleData struct definition directly

#include <QMessageBox>     // For displaying messages
#include <QDebug>          // For debugging output

// Constructor
AddVehicleDialog::AddVehicleDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddVehicleDialog)
{
    ui->setupUi(this); // Set up the UI elements defined in addVehicle.ui

    // Connect signals to slots
    connect(ui->submitButton, &QPushButton::clicked, this, &AddVehicleDialog::on_submitButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &AddVehicleDialog::on_cancelButton_clicked);

    // Set current timestamp as default
    ui->timestampDateTimeEdit->setDateTime(QDateTime::currentDateTime());

    // Set validator for pricePerHourLineEdit to accept floating-point numbers
    // QDoubleValidator* priceValidator = new QDoubleValidator(0.0, 999.99, 2, this);
    // ui->pricePerHourLineEdit->setValidator(priceValidator);
    // For simplicity, keeping it as QLineEdit for now as inputMask is set in UI.
}

// Destructor
AddVehicleDialog::~AddVehicleDialog()
{
    delete ui; // Clean up the UI object
}

// Slot for "Submit" button click
void AddVehicleDialog::on_submitButton_clicked()
{
    // --- Input Validation ---
    QString timestampStr = ui->timestampDateTimeEdit->dateTime().toString("yyyy-MM-dd HH:mm:ss");
    QString category = ui->categoryComboBox->currentText();
    QString vehicleNumber = ui->vehicleNumberLineEdit->text().trimmed();
    QString priceStr = ui->pricePerHourLineEdit->text().trimmed();
    QString driverName = ui->driverNameLineEdit->text().trimmed();

    // Check for empty required fields
    if (category == "-Select-" || vehicleNumber.isEmpty() || priceStr.isEmpty() || driverName.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all required fields (marked with *).");
        return; // Stop processing if validation fails
    }

    // Validate price as a number
    bool ok;
    double pricePerHour = priceStr.toDouble(&ok);
    if (!ok || pricePerHour <= 0) {
        QMessageBox::warning(this, "Input Error", "Please enter a valid positive number for 'Price Per Hour'.");
        return;
    }

    // If all validations pass, store data and accept the dialog
    m_vehicleData.timestamp = ui->timestampDateTimeEdit->dateTime();
    m_vehicleData.category = category;
    m_vehicleData.vehicleNumber = vehicleNumber;
    m_vehicleData.pricePerHour = pricePerHour;
    m_vehicleData.driverName = driverName;

    QMessageBox::information(this, "Success", "Vehicle data captured.");
    accept(); // Close the dialog with QDialog::Accepted status
}

// Slot for "Reset" / "Cancel" button click
void AddVehicleDialog::on_cancelButton_clicked()
{
    // If the user clicks "Reset" (which is now acting as cancel) or closes the dialog,
    // we want to reject it.
    reject(); // Close the dialog with QDialog::Rejected status
}

// Public method to retrieve the captured vehicle data
VehicleData AddVehicleDialog::getVehicleData() const // No :: prefix needed here either due to direct include
{
    return m_vehicleData;
}
