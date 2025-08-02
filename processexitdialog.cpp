#include "processexitdialog.h"
#include "ui_processexitdialog.h"
#include "parkinglotinfo.h"
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
#include <cmath>

ProcessExitDialog::ProcessExitDialog(QList<ParkedVehicle>& vehicles, const ParkingLotData& parkingData, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProcessExitDialog),
    parkedVehicles(vehicles),
    parkingData(parkingData)
{
    ui->setupUi(this);

    // Connect signals and slots
    connect(ui->searchButton, &QPushButton::clicked, this, &ProcessExitDialog::on_searchButton_clicked);
    connect(ui->processExitButton, &QPushButton::clicked, this, &ProcessExitDialog::on_processExitButton_clicked);
    connect(ui->cancelButton, &QPushButton::clicked, this, &ProcessExitDialog::on_cancelButton_clicked);

    // Initially disable process exit button and vehicle info groups
    ui->processExitButton->setEnabled(false);
    ui->vehicleInfoGroup->setEnabled(false);
    ui->billingGroup->setEnabled(false);

    // Set window properties
    setWindowTitle("Vehicle Exit Processing");
    setModal(true);

    // Clear initial display
    clearVehicleInfo();
}

ProcessExitDialog::~ProcessExitDialog()
{
    delete ui;
}

void ProcessExitDialog::on_searchButton_clicked()
{
    QString vehicleNumber = ui->searchEdit->text().trimmed().toUpper();

    if (vehicleNumber.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a vehicle number to search.");
        return;
    }

    // Search for the vehicle in the parked vehicles list
    ParkedVehicle* vehicle = findParkedVehicle(vehicleNumber);

    if (vehicle && vehicle->status == "Parked") {
        // Display vehicle information
        displayVehicleInfo(vehicle->vehicleNumber, vehicle->vehicleType,
                           vehicle->ownerName, vehicle->phoneNumber,
                           vehicle->assignedSlot, vehicle->entryTime,
                           vehicle->isHandicapped);

        // Calculate and display fare
        QDateTime currentTime = QDateTime::currentDateTime();
        double totalFare = calculateFare(vehicle->vehicleType, vehicle->entryTime, currentTime);

        qint64 durationSeconds = vehicle->entryTime.secsTo(currentTime);
        double hours = static_cast<double>(durationSeconds) / 3600.0;

        ui->durationDisplay->setText(QString::number(hours, 'f', 2) + " hours");
        ui->totalFeeDisplay->setText(QString("NPR %1").arg(totalFare, 0, 'f', 2));

        // Enable billing group and process exit button
        ui->billingGroup->setEnabled(true);
        ui->processExitButton->setEnabled(true);
    } else {
        showVehicleNotFound(vehicleNumber);
    }
}

void ProcessExitDialog::on_processExitButton_clicked()
{
    QString vehicleNumber = ui->searchEdit->text().trimmed().toUpper();

    if (vehicleNumber.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a vehicle number.");
        return;
    }

    ParkedVehicle* vehicle = findParkedVehicle(vehicleNumber);

    if (!vehicle || vehicle->status != "Parked") {
        QMessageBox::warning(this, "Error", "Vehicle not found or already processed.");
        return;
    }

    // Process the exit
    QDateTime exitTime = QDateTime::currentDateTime();
    vehicle->exitTime = exitTime;
    vehicle->status = "Exited";

    // Calculate final fare and duration
    double totalFare = calculateFare(vehicle->vehicleType, vehicle->entryTime, exitTime);
    qint64 durationSeconds = vehicle->entryTime.secsTo(exitTime);
    double hours = static_cast<double>(durationSeconds) / 3600.0;

    // Show success message
    showExitSuccess(vehicleNumber, totalFare, hours);

    // Emit signal to notify MainWindow
    emit vehicleExited();

    // Close the dialog
    accept();
}

void ProcessExitDialog::on_cancelButton_clicked()
{
    reject();
}

void ProcessExitDialog::displayVehicleInfo(const QString &vehicleNumber, const QString &vehicleType,
                                           const QString &ownerName, const QString &phoneNumber,
                                           const QString &assignedSlot, const QDateTime &entryTime,
                                           bool isHandicapped)
{
    ui->vehicleNoDisplay->setText(vehicleNumber);
    ui->vehicleTypeDisplay->setText(vehicleType);
    ui->ownerDisplay->setText(ownerName.isEmpty() ? "N/A" : ownerName);
    ui->slotDisplay->setText(assignedSlot);
    ui->entryTimeDisplay->setText(entryTime.toString("yyyy-MM-dd hh:mm:ss"));

    // Enable the vehicle info group
    ui->vehicleInfoGroup->setEnabled(true);
}

void ProcessExitDialog::showVehicleNotFound(const QString &vehicleNumber)
{
    QMessageBox::information(this, "Vehicle Not Found",
                             QString("No parked vehicle found with number: %1").arg(vehicleNumber));
    clearVehicleInfo();
}

void ProcessExitDialog::clearForm()
{
    ui->searchEdit->clear();
    clearVehicleInfo();
    ui->searchEdit->setFocus();
}

void ProcessExitDialog::clearVehicleInfo()
{
    ui->vehicleNoDisplay->setText("-");
    ui->vehicleTypeDisplay->setText("-");
    ui->ownerDisplay->setText("-");
    ui->slotDisplay->setText("-");
    ui->entryTimeDisplay->setText("-");
    ui->durationDisplay->setText("-");
    ui->totalFeeDisplay->setText("NPR 0.00");

    ui->processExitButton->setEnabled(false);
    ui->vehicleInfoGroup->setEnabled(false);
    ui->billingGroup->setEnabled(false);
}

void ProcessExitDialog::showExitSuccess(const QString &vehicleNumber, double totalFare, double duration)
{
    QMessageBox::information(this, "Exit Successful",
                             QString("Vehicle %1 has been successfully processed.\n"
                                     "Duration: %2 hours\n"
                                     "Total Fare: NPR %3")
                                 .arg(vehicleNumber)
                                 .arg(duration, 0, 'f', 2)
                                 .arg(totalFare, 0, 'f', 2));

    clearForm();
}

double ProcessExitDialog::calculateFare(const QString& vehicleType, const QDateTime& entryTime, const QDateTime& exitTime)
{
    if (!entryTime.isValid() || !exitTime.isValid()) {
        return 0.0;
    }

    qint64 durationSeconds = entryTime.secsTo(exitTime);
    double hours = static_cast<double>(durationSeconds) / 3600.0;

    // Round up to the nearest hour for billing
    hours = std::ceil(hours);

    double hourlyRate = 0.0;

    // Get the rate for this vehicle type
    if (vehicleType == "Car") {
        hourlyRate = parkingData.carRate;
    } else if (vehicleType == "Bike") {
        hourlyRate = parkingData.bikeRate;
    } else if (vehicleType == "Bus") {
        hourlyRate = parkingData.busRate;
    } else if (vehicleType == "Minivan") {
        hourlyRate = parkingData.minivanRate;
    } else {
        // Check custom vehicles
        for (const CustomVehicle& custom : parkingData.customVehicles) {
            if (custom.vehicleType == vehicleType) {
                hourlyRate = custom.rate;
                break;
            }
        }
    }

    return hours * hourlyRate;
}

ParkedVehicle* ProcessExitDialog::findParkedVehicle(const QString& vehicleNumber)
{
    for (ParkedVehicle& vehicle : parkedVehicles) {
        if (vehicle.vehicleNumber.compare(vehicleNumber, Qt::CaseInsensitive) == 0) {
            return &vehicle;
        }
    }
    return nullptr;
}
