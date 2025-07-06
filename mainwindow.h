#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QVector>     // For storing a list of vehicle data

#include "vehicledata.h" // Include the shared VehicleData struct definition

// Forward declaration of the Ui::MainWindow class
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT // Essential macro for Qt's signal/slot mechanism

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sidebarListWidget_itemClicked(QListWidgetItem *item);
    void on_menuIconLabel_linkActivated(const QString &link);
    void on_userIconLabel_linkActivated(const QString &link);

private:
    // Function to save a single vehicle entry to the CSV file
    void saveVehicleData(const VehicleData& data); // Now uses the shared VehicleData

    // Function to load all vehicle data from the CSV file
    QVector<VehicleData> loadAllVehicleData(); // Now uses the shared VehicleData

    // Function to update dashboard counts based on loaded data
    void updateDashboardCounts();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
