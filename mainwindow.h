#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include "parkinglotinfo.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>

class QWidget;
class QLineEdit;
class QDoubleSpinBox;
class QSpinBox;
class QPushButton;
class QListWidget;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    struct ParkingLotData {
        QString name;
        QString location;
        double carRate;
        int carCapacity;
        double bikeRate;
        int bikeCapacity;
        double busRate;
        int busCapacity;
        double minivanRate;
        int minivanCapacity;
        int handicappedSpots;
        QList<CustomVehicle> customVehicles;
    };

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void Login();
    void Signup();
    void switchSignup();
    void switchLogin();
    void backToRoleSelection();
    void addCustomRate();
    void editCustomRate();
    void deleteCustomRate();
    void saveAdminData();

private:
    Ui::MainWindow *ui;

    // SQLite Database members
    QSqlDatabase db;
    void initializeDatabase();
    bool createUser(const QString& email, const QString& password);
    bool authenticateUser(const QString& email, const QString& password);
    bool userExists(const QString& email);

    // You can remove this after testing SQLite implementation
    QMap<QString, QString> userDatabase;

    // Parking lot data
    ParkingLotData parkingData;

    // Admin page UI components
    QWidget *adminPage;
    QLineEdit *nameEdit;
    QLineEdit *locationEdit;
    QDoubleSpinBox *rateCar;
    QSpinBox *capacityCar;
    QDoubleSpinBox *rateBike;
    QSpinBox *capacityBike;
    QDoubleSpinBox *rateBus;
    QSpinBox *capacityBus;
    QDoubleSpinBox *rateMinivan;
    QSpinBox *capacityMinivan;
    QSpinBox *handicappedSpotsSpinBox;
    QLineEdit *customVehicleName;
    QDoubleSpinBox *customRate;
    QSpinBox *customCapacity;
    QPushButton *addCustomRateButton;
    QPushButton *editCustomRateButton;
    QPushButton *deleteCustomRateButton;
    QListWidget *customVehicleList;
    QPushButton *saveButton;

    // Helper functions
    void setupAdminPage();
    CustomVehicle parseCustomVehicleFromString(const QString& itemText);
};

#endif // MAINWINDOW_H
