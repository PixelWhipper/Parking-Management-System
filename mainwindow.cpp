#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , availableSpots(10) // Initial number of spots
    , occupiedSpots(0) {
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0); // Start with the login page
    ui->parkingLogFrame->setVisible(false); // Initially hide the parking log

    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::attemptLogin);
    connect(ui->parkCarButton, &QPushButton::clicked, this, &MainWindow::incrementSpot);
    connect(ui->carLeftButton, &QPushButton::clicked, this, &MainWindow::decrementSpot);
    connect(ui->enableLogCheckBox, &QCheckBox::toggled, this, &MainWindow::toggleParkingLog);

    updateSpotLabels();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::attemptLogin() {
    QString email = ui->emailEdit->text();
    QString password = ui->passwordEdit_login->text();

    // **Replace with your actual authentication logic**
    if (email == "admin" && password == "password") {
        ui->stackedWidget->setCurrentIndex(1); // Switch to the dashboard page
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
        ui->passwordEdit_login->clear();
    }
}

void MainWindow::showDashboard() {
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::incrementSpot() {
    if (availableSpots > 0) {
        availableSpots--;
        occupiedSpots++;
        updateSpotLabels();
        if (ui->enableLogCheckBox->isChecked()) {
            logParkingEvent("Car parked at " + QDateTime::currentDateTime().toString());
        }
    } else {
        QMessageBox::information(this, "Parking Full", "No available parking spots.");
    }
}

void MainWindow::decrementSpot() {
    if (occupiedSpots > 0) {
        availableSpots++;
        occupiedSpots--;
        updateSpotLabels();
        if (ui->enableLogCheckBox->isChecked()) {
            logParkingEvent("Car left at " + QDateTime::currentDateTime().toString());
        }
    } else {
        QMessageBox::information(this, "No Cars Parked", "No cars to leave.");
    }
}

void MainWindow::updateSpotLabels() {
    ui->availableSpotsLabel->setText("Available Spots: " + QString::number(availableSpots));
    ui->occupiedSpotsLabel->setText("Occupied Spots: " + QString::number(occupiedSpots));
}

void MainWindow::toggleParkingLog(bool checked) {
    ui->parkingLogFrame->setVisible(checked);
}

void MainWindow::logParkingEvent(const QString& event) {
    ui->parkingLogTextEdit->append(event);
}
