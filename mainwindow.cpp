#include "mainwindow.h"
#include "parkinglotinfo.h"
#include "ui_mainwindow.h"
#include "vehicleaddentry.h"
#include "processexitdialog.h"
#include <QMessageBox>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QPushButton>
#include <QListWidget>
#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QTableWidget> // Include for QTableWidget

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initializeDatabase();

    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::Login);
    connect(ui->signUpButton, &QPushButton::clicked, this, &MainWindow::Signup);
    connect(ui->signUpLabel, &QLabel::linkActivated, this, &MainWindow::switchSignup);

    QLabel *backToLogin = new QLabel("Already have an account? <a href=\"login\">Log in</a>");
    backToLogin->setAlignment(Qt::AlignCenter);
    backToLogin->setOpenExternalLinks(false);
    connect(backToLogin, &QLabel::linkActivated, this, &MainWindow::switchLogin);
    ui->verticalLayoutSignUp->addWidget(backToLogin);

    setupAdminPage();
    ui->stackedWidget->setCurrentWidget(ui->loginPage);

    // Connect the "Process Exit" button (assuming you have one in mainwindow.ui)
    connect(ui->processExitButton, &QPushButton::clicked, this, &MainWindow::on_processExitButton_clicked);
    // Ensure you have a QTableWidget named 'parkingTable' in your mainwindow.ui
    ui->parkingTable->setColumnCount(6);
    ui->parkingTable->setHorizontalHeaderLabels({"Vehicle Number", "Type", "Entry Time", "Exit Time", "Assigned Slot", "Status"});
    updateParkingTableDisplay(); // Initial display update from in-memory list
}

MainWindow::~MainWindow(){
    if (db.isOpen()) {
        db.close();
    }
    delete ui;
}

void MainWindow::initializeDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");

    if (!db.open()) {
        qDebug() << "Error: Could not open database" << db.lastError().text();
        QMessageBox::critical(this, "Database Error",
                              "Could not open database: " + db.lastError().text());
        return;
    }
    QSqlQuery query;
    QString createTableQuery = R"(
        CREATE TABLE IF NOT EXISTS Credentials (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            email TEXT NOT NULL UNIQUE,
            password TEXT NOT NULL,
            created_at DATETIME DEFAULT CURRENT_TIMESTAMP
        )
    )";

    if (!query.exec(createTableQuery)) {
        qDebug() << "Error creating table:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error",
                              "Could not create table: " + query.lastError().text());
    } else {
        qDebug() << "Database initialized successfully";
    }
}

bool MainWindow::createUser(const QString& email, const QString& password)
{
    QSqlQuery query;
    query.prepare("INSERT INTO Credentials (email, password) VALUES (?, ?)");
    query.addBindValue(email);
    query.addBindValue(password);

    if (!query.exec()) {
        qDebug() << "Error creating user:" << query.lastError().text();
        return false;
    }

    qDebug() << "User created successfully:" << email;
    return true;
}

bool MainWindow::authenticateUser(const QString& email, const QString& password)
{
    QSqlQuery query;
    query.prepare("SELECT password FROM Credentials WHERE email = ?");
    query.addBindValue(email);

    if (!query.exec()) {
        qDebug() << "Error authenticating user:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        QString storedPassword = query.value(0).toString();
        bool isValid = (storedPassword == password);
        qDebug() << "User authentication result:" << isValid;
        return isValid;
    }

    qDebug() << "User not found:" << email;
    return false;
}

bool MainWindow::userExists(const QString& email)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM Credentials WHERE email = ?");
    query.addBindValue(email);

    if (!query.exec()) {
        qDebug() << "Error checking user existence:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        int count = query.value(0).toInt();
        return count > 0;
    }

    return false;
}

void MainWindow::setupAdminPage(){
    adminPage = new QWidget();
    QVBoxLayout *mainLayout = new QVBoxLayout(adminPage);

    QLabel *titleLabel = new QLabel("Enter Parking Lot Details");
    titleLabel->setStyleSheet("font-weight: bold; font-size: 16px;");
    mainLayout->addWidget(titleLabel);

    nameEdit = new QLineEdit();
    nameEdit->setPlaceholderText("Parking Lot Name");
    mainLayout->addWidget(nameEdit);

    locationEdit = new QLineEdit();
    locationEdit->setPlaceholderText("Location");
    mainLayout->addWidget(locationEdit);

    QLabel *rateLabel = new QLabel("Rates Per Hour and Capacities:");
    rateLabel->setStyleSheet("font-weight: bold;");
    mainLayout->addWidget(rateLabel);

    // Car layout
    QHBoxLayout *carLayout = new QHBoxLayout();
    rateCar = new QDoubleSpinBox();
    rateCar->setPrefix("Car: NPR ");
    rateCar->setSuffix("/hr");
    capacityCar = new QSpinBox();
    capacityCar->setPrefix("Capacity: ");
    carLayout->addWidget(rateCar);
    carLayout->addWidget(capacityCar);
    mainLayout->addLayout(carLayout);

    // Bike layout
    QHBoxLayout *bikeLayout = new QHBoxLayout();
    rateBike = new QDoubleSpinBox();
    rateBike->setPrefix("Bike: NPR ");
    rateBike->setSuffix("/hr");
    capacityBike = new QSpinBox();
    capacityBike->setPrefix("Capacity: ");
    bikeLayout->addWidget(rateBike);
    bikeLayout->addWidget(capacityBike);
    mainLayout->addLayout(bikeLayout);
    // Bus layout

    QHBoxLayout *busLayout = new QHBoxLayout();
    rateBus = new QDoubleSpinBox();
    rateBus->setPrefix("Bus: NPR ");
    rateBus->setSuffix("/hr");
    capacityBus = new QSpinBox();
    capacityBus->setPrefix("Capacity: ");
    busLayout->addWidget(rateBus);
    busLayout->addWidget(capacityBus);
    mainLayout->addLayout(busLayout);


    QHBoxLayout *minivanLayout = new QHBoxLayout();
    rateMinivan = new QDoubleSpinBox();
    rateMinivan->setPrefix("Minivan: NPR ");
    rateMinivan->setSuffix("/hr");
    capacityMinivan = new QSpinBox();
    capacityMinivan->setPrefix("Capacity: ");
    minivanLayout->addWidget(rateMinivan);
    minivanLayout->addWidget(capacityMinivan);
    mainLayout->addLayout(minivanLayout);

    handicappedSpotsSpinBox = new QSpinBox();
    handicappedSpotsSpinBox->setPrefix("Handicapped Spots: ");
    handicappedSpotsSpinBox->setMaximum(1000);
    mainLayout->addWidget(handicappedSpotsSpinBox);

    QLabel *customLabel = new QLabel("Custom Vehicle Rate");
    customLabel->setStyleSheet("font-weight: bold;");
    mainLayout->addWidget(customLabel);

    QHBoxLayout *customLayout = new QHBoxLayout();
    customVehicleName = new QLineEdit();
    customVehicleName->setPlaceholderText("Vehicle Type");
    customRate = new QDoubleSpinBox();
    customRate->setPrefix("NPR ");
    customRate->setSuffix("/hr");
    customCapacity = new QSpinBox();
    customCapacity->setPrefix("Capacity: ");

    addCustomRateButton = new QPushButton("Add");
    editCustomRateButton = new QPushButton("Edit");
    deleteCustomRateButton = new QPushButton("Delete");

    customLayout->addWidget(customVehicleName);
    customLayout->addWidget(customRate);
    customLayout->addWidget(customCapacity);
    customLayout->addWidget(addCustomRateButton);
    customLayout->addWidget(editCustomRateButton);
    customLayout->addWidget(deleteCustomRateButton);
    mainLayout->addLayout(customLayout);

    // Custom vehicle list
    customVehicleList = new QListWidget();
    mainLayout->addWidget(customVehicleList);

    saveButton = new QPushButton("Save");
    mainLayout->addWidget(saveButton);

    connect(addCustomRateButton, &QPushButton::clicked, this, &MainWindow::addCustomRate);
    connect(editCustomRateButton, &QPushButton::clicked, this, &MainWindow::editCustomRate);
    connect(deleteCustomRateButton, &QPushButton::clicked, this, &MainWindow::deleteCustomRate);
    connect(saveButton, &QPushButton::clicked, this, &MainWindow::saveAdminData);

    ui->stackedWidget->addWidget(adminPage);
}

void MainWindow::Login(){
    QString email = ui->emailEdit->text();
    QString password = ui->passwordEdit_login->text();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Failed", "Email and password cannot be empty.");
        return;
    }

    qDebug() << "Attempting login for:" << email;
    if (authenticateUser(email, password)) {
        ui->stackedWidget->setCurrentWidget(adminPage);
        setWindowTitle("Admin Parking Lot Input");
        ui->emailEdit->clear();
        ui->passwordEdit_login->clear();

        QMessageBox::information(this, "Success", "Login successful!");
        qDebug() << "Login successful for:" << email;
    } else {
        QMessageBox::warning(this, "Login Failed", "Email or password was wrong");
        qDebug() << "Login failed for:" << email;
    }
}

void MainWindow::Signup(){
    QString email = ui->emailEdit_signup->text();
    QString password = ui->passwordEdit_signup->text();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Sign Up Failed", "Email and password cannot be empty.");
        return;
    }

    // Basic email validation
    if (!email.contains("@") || !email.contains(".")) {
        QMessageBox::warning(this, "Sign Up Failed", "Please enter a valid email address.");
        return;
    }

    qDebug() << "Attempting signup for:" << email;

    // Check if user already exists
    if (userExists(email)) {
        QMessageBox::warning(this, "Sign Up Failed", "Account already exists with this email.");
        qDebug() << "Signup failed - user already exists:" << email;
        return;
    }

    // Use DATABASE instead of QMap
    if (createUser(email, password)) {
        QMessageBox::information(this, "Success", "Account created successfully! Please log in.");

        // Clear the signup fields
        ui->emailEdit_signup->clear();
        ui->passwordEdit_signup->clear();

        // Switch to login page
        ui->stackedWidget->setCurrentWidget(ui->loginPage);

        qDebug() << "Signup successful for:" << email;
    } else {
        QMessageBox::warning(this, "Sign Up Failed", "Database error occurred. Please try again.");
        qDebug() << "Signup failed for:" << email;
    }
}

void MainWindow::switchSignup(){
    ui->stackedWidget->setCurrentWidget(ui->signUpPage);
}

void MainWindow::switchLogin(){
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

void MainWindow::backToRoleSelection(){
    // Implementation depends on your UI structure
    // This function is declared in header but not used in current code
}

void MainWindow::addCustomRate(){
    QString vehicleType = customVehicleName->text();
    double rate = customRate->value();
    int capacity = customCapacity->value();

    if (!vehicleType.isEmpty()) {
        QString itemText = QString("%1 - NPR %2/hr (Capacity: %3)")
        .arg(vehicleType)
            .arg(rate)
            .arg(capacity);
        customVehicleList->addItem(itemText);
        customVehicleName->clear();
        customRate->setValue(0);
        customCapacity->setValue(0);
    }
}

void MainWindow::editCustomRate(){
    int currentRow = customVehicleList->currentRow();
    if (currentRow >= 0) {
        QListWidgetItem *item = customVehicleList->currentItem();
        if (item) {
            // Parse the current item text to populate the edit fields
            QString itemText = item->text();
            CustomVehicle vehicle = parseCustomVehicleFromString(itemText);

            // Populate the edit fields
            customVehicleName->setText(vehicle.vehicleType);
            customRate->setValue(vehicle.rate);
            customCapacity->setValue(vehicle.capacity);

            // Remove the item from the list so it can be re-added with new values
            delete customVehicleList->takeItem(currentRow);

            QMessageBox::information(this, "Edit", "Item loaded for editing. Make changes and click Add.");
        }
    }
}
void MainWindow::saveAdminData() {
    QString name = nameEdit->text();
    QString location = locationEdit->text();

    if (name.isEmpty() || location.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill in parking details");
        return;
    }

    parkingData.name = name;
    parkingData.location = location;
    parkingData.carRate = rateCar->value();
    parkingData.carCapacity = capacityCar->value();
    parkingData.bikeRate = rateBike->value();
    parkingData.bikeCapacity = capacityBike->value();
    parkingData.busRate = rateBus->value();
    parkingData.busCapacity = capacityBus->value();
    parkingData.minivanRate = rateMinivan->value();
    parkingData.minivanCapacity = capacityMinivan->value();
    parkingData.handicappedSpots = handicappedSpotsSpinBox->value();


    parkingData.customVehicles.clear();
    for (int i = 0; i < customVehicleList->count(); ++i) {
        QString itemText = customVehicleList->item(i)->text();
        CustomVehicle vehicle = parseCustomVehicleFromString(itemText);
        parkingData.customVehicles.append(vehicle);
    }

    // Assuming index 3 is your main application page after admin setup
    ui->stackedWidget->setCurrentIndex(3);

}

void MainWindow::deleteCustomRate(){
    int currentRow = customVehicleList->currentRow();
    if (currentRow >= 0) {
        delete customVehicleList->takeItem(currentRow);
    }
}



CustomVehicle MainWindow::parseCustomVehicleFromString(const QString& itemText) {
    CustomVehicle vehicle;


    QStringList parts = itemText.split(" - NPR ");
    if (parts.size() >= 2) {
        vehicle.vehicleType = parts[0];

        QString rateAndCapacity = parts[1];
        QStringList rateParts = rateAndCapacity.split("/hr (Capacity: ");
        if (rateParts.size() >= 2) {
            vehicle.rate = rateParts[0].toDouble();

            QString capacityStr = rateParts[1];
            capacityStr.remove(")");
            vehicle.capacity = capacityStr.toInt();
        }
    }

    return vehicle;
}



void MainWindow::on_addEntryButton_clicked()
{
    AddVehicle *addVehicleDialog = new AddVehicle(this);

    // Connect the dialog's signal to MainWindow's slot
    connect(addVehicleDialog, &AddVehicle::vehicleEntryAdded,
            this, &MainWindow::handleNewVehicleEntry);

    // Show the dialog modally. exec() returns QDialog::Accepted or QDialog::Rejected
    int result = addVehicleDialog->exec();

    // After the dialog is closed, check if it was accepted (data was submitted)
    if (result == QDialog::Accepted) {
        qDebug() << "AddVehicle dialog was accepted.";
        // Data processing is handled by handleNewVehicleEntry slot
    } else {
        qDebug() << "AddVehicle dialog was cancelled or rejected.";
    }

    // Clean up the dialog object
    delete addVehicleDialog;
}

// Replace the existing on_processExitButton_clicked method in MainWindow with this:

void MainWindow::on_processExitButton_clicked()
{
    // Create the exit dialog with proper constructor parameters
    ProcessExitDialog *exitDialog = new ProcessExitDialog(parkedVehicles, parkingData, this);

    // Connect the signal to handle when a vehicle exits
    connect(exitDialog, &ProcessExitDialog::vehicleExited, this, &MainWindow::handleVehicleExited);

    // Show the dialog modally
    int result = exitDialog->exec();

    // Clean up
    delete exitDialog;
}

// New slot in MainWindow to refresh the parking table after a vehicle exits
void MainWindow::handleVehicleExited()
{
    // This will simply refresh the QTableWidget using the updated in-memory parkedVehicles list
    updateParkingTableDisplay();
}


void MainWindow::updateParkingTableDisplay()
{
    ui->parkingTable->setRowCount(0);

    int row = 0;
    // Iterate through the in-memory list and display only 'Parked' vehicles
    for (const ParkedVehicle& vehicle : parkedVehicles) {
        if (vehicle.status == "Parked") { // Only show currently parked vehicles
            ui->parkingTable->insertRow(row);
            ui->parkingTable->setItem(row, 0, new QTableWidgetItem(vehicle.vehicleNumber));
            ui->parkingTable->setItem(row, 1, new QTableWidgetItem(vehicle.vehicleType));
            ui->parkingTable->setItem(row, 2, new QTableWidgetItem(vehicle.entryTime.toString("yyyy-MM-dd hh:mm:ss")));
            ui->parkingTable->setItem(row, 3, new QTableWidgetItem("N/A")); // Exit time not applicable for parked
            ui->parkingTable->setItem(row, 4, new QTableWidgetItem(vehicle.assignedSlot));
            ui->parkingTable->setItem(row, 5, new QTableWidgetItem(vehicle.status));
            row++;
        }
    }
    ui->parkingTable->resizeColumnsToContents();

}

void MainWindow::handleNewVehicleEntry( // <--- THIS SIGNATURE MUST EXACTLY MATCH DECLARATION
    const QString& vehicleNumber,
    const QString& vehicleType,
    const QString& ownerName,
    const QString& phoneNumber,
    const QString& assignedSlot,
    const QDateTime& entryTime,
    bool isHandicapped
    ) {
    // Check for duplicates first in the in-memory list
    for (const ParkedVehicle& pv : parkedVehicles) {
        if (pv.status == "Parked" && pv.vehicleNumber.compare(vehicleNumber, Qt::CaseInsensitive) == 0) {
            QMessageBox::warning(this, "Duplicate Vehicle",
                                 QString("Vehicle number '%1' is already parked.").arg(vehicleNumber));
            return;
        }
    }

    if (!canParkVehicle(vehicleType, isHandicapped)) {
        return;
    }

    ParkedVehicle newEntry(
        vehicleNumber,
        vehicleType,
        ownerName,
        phoneNumber,
        assignedSlot,
        entryTime,
        isHandicapped,
        "Parked"
        );

    parkedVehicles.append(newEntry); // Add to in-memory list
    qDebug() << "Vehicle added to in-memory list:" << vehicleNumber << vehicleType;

    updateParkingTableDisplay(); // Refresh the table after adding

    QMessageBox::information(this, "Success", "Vehicle entry added successfully!");
}


bool MainWindow::canParkVehicle(const QString& vehicleType, bool isHandicappedRequest)
{
    int currentOccupancy = 0;
    int maxCapacity = 0;
    int handicappedOccupancy = 0; // Track currently parked handicapped vehicles

    // Calculate current occupancy for this vehicle type from in-memory list
    for (const ParkedVehicle& vehicle : parkedVehicles) {
        if (vehicle.status == "Parked") {
            // Count total for this type
            if (vehicle.vehicleType == vehicleType) {
                currentOccupancy++;
            }
            if (vehicle.isHandicapped) {
                handicappedOccupancy++;
            }
        }
    }

    // Determine max capacity for the given vehicle type based on parkingData
    // This relies on parkingData being correctly loaded/saved via saveAdminData/loadAdminData
    if (vehicleType == "Car") {
        maxCapacity = parkingData.carCapacity;
    } else if (vehicleType == "Bike") {
        maxCapacity = parkingData.bikeCapacity;
    } else if (vehicleType == "Bus") {
        maxCapacity = parkingData.busCapacity;
    } else if (vehicleType == "Minivan") {
        maxCapacity = parkingData.minivanCapacity;
    } else {
        bool foundCustomType = false;
        for (const CustomVehicle& custom : parkingData.customVehicles) {
            if (custom.vehicleType == vehicleType) {
                maxCapacity = custom.capacity;
                foundCustomType = true;
                break;
            }
        }
        if (!foundCustomType) {
            QMessageBox::warning(this, "Unknown Vehicle Type", "Cannot determine capacity for unknown vehicle type: " + vehicleType);
            return false;
        }
    }

    if (isHandicappedRequest) {
        if (handicappedOccupancy >= parkingData.handicappedSpots) {
            QMessageBox::warning(this, "Parking Full", "All handicapped spots are currently occupied.");
            return false;
        }
    }

    if (currentOccupancy >= maxCapacity) {
        QMessageBox::warning(this, "Parking Full",
                             QString("The parking lot is full for %1 vehicles. (Capacity: %2, Occupied: %3)")
                                 .arg(vehicleType)
                                 .arg(maxCapacity)
                                 .arg(currentOccupancy));
        return false;
    }

    return true;
}
