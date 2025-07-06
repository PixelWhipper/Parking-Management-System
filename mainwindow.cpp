#include "mainwindow.h"
#include "parkinglotinfo.h"
#include "ui_mainwindow.h"
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

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Initialize database first
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
}

MainWindow::~MainWindow(){
    if (db.isOpen()) {
        db.close();
    }
    delete ui;
}

void MainWindow::initializeDatabase()
{
    // Create database connection
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");

    if (!db.open()) {
        qDebug() << "Error: Could not open database" << db.lastError().text();
        QMessageBox::critical(this, "Database Error",
                              "Could not open database: " + db.lastError().text());
        return;
    }

    // Create table if it doesn't exist
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
    return false; // User not found
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
    capacityCar->setMaximum(1000);
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
    capacityBike->setMaximum(1000);
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
    capacityBus->setMaximum(1000);
    busLayout->addWidget(rateBus);
    busLayout->addWidget(capacityBus);
    mainLayout->addLayout(busLayout);

    // Minivan layout
    QHBoxLayout *minivanLayout = new QHBoxLayout();
    rateMinivan = new QDoubleSpinBox();
    rateMinivan->setPrefix("Minivan: NPR ");
    rateMinivan->setSuffix("/hr");
    capacityMinivan = new QSpinBox();
    capacityMinivan->setPrefix("Capacity: ");
    capacityMinivan->setMaximum(1000);
    minivanLayout->addWidget(rateMinivan);
    minivanLayout->addWidget(capacityMinivan);
    mainLayout->addLayout(minivanLayout);

    // Handicapped spots
    handicappedSpotsSpinBox = new QSpinBox();
    handicappedSpotsSpinBox->setPrefix("Handicapped Spots: ");
    handicappedSpotsSpinBox->setMaximum(1000);
    mainLayout->addWidget(handicappedSpotsSpinBox);

    // Custom vehicle section
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
    customCapacity->setMaximum(1000);

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

    // Save button
    saveButton = new QPushButton("Save");
    mainLayout->addWidget(saveButton);

    // Connect signals
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

    // Use DATABASE instead of QMap
    if (authenticateUser(email, password)) {
        ui->stackedWidget->setCurrentWidget(adminPage);
        setWindowTitle("Admin Parking Lot Input");

        // Clear the login fields
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

    // Parse format: "VehicleType - NPR rate/hr (Capacity: capacity)"
    QStringList parts = itemText.split(" - NPR ");
    if (parts.size() >= 2) {
        vehicle.vehicleType = parts[0];

        QString rateAndCapacity = parts[1];
        QStringList rateParts = rateAndCapacity.split("/hr (Capacity: ");
        if (rateParts.size() >= 2) {
            vehicle.rate = rateParts[0].toDouble();

            QString capacityStr = rateParts[1];
            capacityStr.remove(")"); // Remove the closing parenthesis
            vehicle.capacity = capacityStr.toInt();
        }
    }

    return vehicle;
}
