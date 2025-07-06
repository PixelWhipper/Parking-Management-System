#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "addVehicle.h" // Corrected include as per your file names

#include <QDebug>
#include <QMessageBox>
#include <QFile>        // For file operations
#include <QTextStream>  // For reading/writing text from/to files
#include <QDateTime>    // For working with date and time

// Constructor implementation
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // --- Connect Signals to Slots ---
    connect(ui->sidebarListWidget, &QListWidget::itemClicked, this, &MainWindow::on_sidebarListWidget_itemClicked);
    connect(ui->menuIconLabel, &QLabel::linkActivated, this, &MainWindow::on_menuIconLabel_linkActivated);
    connect(ui->userIconLabel, &QLabel::linkActivated, this, &MainWindow::on_userIconLabel_linkActivated);

    // --- Initial Dashboard Data & Update ---
    updateDashboardCounts(); // Call this to populate counts from CSV on startup

    // Set the initial selected item in the sidebar to "Dashboard"
    if (ui->sidebarListWidget->count() > 0) {
        ui->sidebarListWidget->setCurrentRow(0);
    }

    qDebug() << "MainWindow initialized and dashboard data set.";
}

// Destructor implementation
MainWindow::~MainWindow()
{
    // It's crucial to delete the 'ui' object.
    delete ui;
    qDebug() << "MainWindow destroyed.";
}

// --- CSV File Helper Functions ---

// Function to save a single vehicle entry to the CSV file
void MainWindow::saveVehicleData(const ::VehicleData& data) // Use ::VehicleData for global scope
{
    QFile file("parking_data.csv");
    // Open in Append mode and Text mode
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);

        // If the file is empty, write the header row
        if (file.size() == 0) {
            out << "Timestamp,Category,VehicleNumber,PricePerHour,DriverName\n";
        }

        // Format QDateTime to a standard string for saving
        QString timestampStr = data.timestamp.toString("yyyy-MM-dd HH:mm:ss");

        // Write the data, escaping commas within fields if necessary (though not critical for this data)
        out << timestampStr << ","
            << data.category << ","
            << data.vehicleNumber << ","
            << QString::number(data.pricePerHour, 'f', 2) << "," // Format price to 2 decimal places
            << data.driverName << "\n";

        file.close();
        qDebug() << "Vehicle data saved to parking_data.csv";
    } else {
        qCritical() << "Error: Could not open parking_data.csv for writing:" << file.errorString();
        QMessageBox::critical(this, "File Error", "Could not save vehicle data.");
    }
}

// Function to load all vehicle data from the CSV file
QVector<::VehicleData> MainWindow::loadAllVehicleData() // Use ::VehicleData for global scope
{
    QVector<::VehicleData> loadedData; // Use ::VehicleData for global scope
    QFile file("parking_data.csv");

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        // Skip header line if it exists
        if (!in.atEnd()) {
            in.readLine(); // Read and discard header
        }

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList fields = line.split(','); // Split by comma

            if (fields.size() == 5) { // Ensure correct number of fields
                ::VehicleData data; // Use ::VehicleData for global scope
                data.timestamp = QDateTime::fromString(fields[0], "yyyy-MM-dd HH:mm:ss");
                data.category = fields[1];
                data.vehicleNumber = fields[2];
                data.pricePerHour = fields[3].toDouble();
                data.driverName = fields[4];
                loadedData.append(data);
            } else {
                qWarning() << "Skipping malformed line in CSV:" << line;
            }
        }
        file.close();
        qDebug() << "Loaded" << loadedData.size() << "records from parking_data.csv";
    } else {
        qWarning() << "Warning: Could not open parking_data.csv for reading. File might not exist yet or is empty.";
    }
    return loadedData;
}

// Updates dashboard counts by processing loaded vehicle data
void MainWindow::updateDashboardCounts()
{
    QVector<::VehicleData> allVehicles = loadAllVehicleData(); // Use ::VehicleData for global scope

    QDate today = QDate::currentDate();
    QDate yesterday = today.addDays(-1);
    QDate sevenDaysAgo = today.addDays(-6); // Inclusive of today, 7 days from today back

    int todaysEntries = 0;
    int yesterdaysEntries = 0;
    int last7DaysEntries = 0;
    int totalEntries = allVehicles.size(); // Total is simply the size of the loaded vector

    for (const ::VehicleData& vehicle : allVehicles) { // Use ::VehicleData for global scope
        QDate vehicleDate = vehicle.timestamp.date();

        if (vehicleDate == today) {
            todaysEntries++;
        }
        if (vehicleDate == yesterday) {
            yesterdaysEntries++;
        }
        if (vehicleDate >= sevenDaysAgo && vehicleDate <= today) {
            last7DaysEntries++;
        }
    }

    // Update UI labels
    ui->card1ValueLabel->setText(QString::number(todaysEntries));      // Todays Vehicle Entries
    ui->card2ValueLabel->setText(QString::number(yesterdaysEntries));  // Yesterdays Vehicle Entries
    ui->card3ValueLabel->setText(QString::number(last7DaysEntries));  // Last 7 days Vehicle Entries
    ui->card4ValueLabel->setText(QString::number(totalEntries));      // Total Vehicle Entries

    // --- Dummy values for other cards (replace with real logic if you store user/category data) ---
    ui->card5ValueLabel->setText("2"); // Total Registered Users - You'll need separate storage for users
    ui->card6ValueLabel->setText("3"); // Listed Categories - You'll need separate storage for categories

    // Ensure icon styles are applied
    ui->carIcon1->setStyleSheet("QLabel { background-color: #F8FBF8; color: #6FCF97; border-radius: 50%; padding: 8px; }");
    ui->carIcon2->setStyleSheet("QLabel { background-color: #F8F0FF; color: #BB6BD9; border-radius: 50%; padding: 8px; }");
    ui->carIcon3->setStyleSheet("QLabel { background-color: #E6F0FF; color: #4285F4; border-radius: 50%; padding: 8px; }");
    ui->carIcon4->setStyleSheet("QLabel { background-color: #FFF0E6; color: #FF9F42; border-radius: 50%; padding: 8px; }");
    ui->userIcon->setStyleSheet("QLabel { background-color: #E6F0FF; color: #4285F4; border-radius: 50%; padding: 8px; }");
    ui->categoryIcon->setStyleSheet("QLabel { background-color: #F8FBF8; color: #6FCF97; border-radius: 50%; padding: 8px; }");

    qDebug() << "Dashboard counts updated from CSV data.";
}

// --- Slot Implementations ---

void MainWindow::on_sidebarListWidget_itemClicked(QListWidgetItem *item)
{
    QString clickedText = item->text().trimmed();
    qDebug() << "Sidebar item clicked:" << clickedText;

    if (clickedText == "Dashboard") {
        qDebug() << "Navigating to Dashboard...";
        updateDashboardCounts(); // Refresh counts when Dashboard is re-selected
    } else if (clickedText == "Add Vehicle") {
        qDebug() << "Opening Add Vehicle Dialog...";
        // Instantiate AddVehicleDialog. Ensure its constructor and getVehicleData()
        // are updated to use the globally defined ::VehicleData struct.
        AddVehicleDialog addVehicleDialog(this);
        if (addVehicleDialog.exec() == QDialog::Accepted) {
            // Get the data from the dialog
            // Now directly uses the shared ::VehicleData struct from global scope
            ::VehicleData data = addVehicleDialog.getVehicleData();

            // Save the new vehicle data to the CSV file
            saveVehicleData(data);

            QMessageBox::information(this, "Success", "Vehicle added successfully to file!");
            qDebug() << "Vehicle added to CSV file.";
            updateDashboardCounts(); // Refresh dashboard counts after adding a vehicle
        } else {
            QMessageBox::information(this, "Cancelled", "Vehicle addition cancelled.");
        }
    } else {
        QMessageBox::information(this, "Navigation", clickedText + " screen not implemented yet for plain file storage.");
    }
}

void MainWindow::on_menuIconLabel_linkActivated(const QString &link)
{
    Q_UNUSED(link);
    QMessageBox::information(this, "Menu", "Menu icon clicked! (Functionality to be added)");
}

void MainWindow::on_userIconLabel_linkActivated(const QString &link)
{
    Q_UNUSED(link);
    QMessageBox::information(this, "User Profile", "User icon clicked! (Show profile/logout options)");
}
