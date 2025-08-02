#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QMap>
#include <QList>
#include "parkinglotinfo.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QDebug>
class processexitdialog;
class AddVehicle;
class QWidget;
class QLineEdit;
class QDoubleSpinBox;
class QSpinBox;
class QPushButton;
class QListWidget;
class QComboBox;
class QDateTimeEdit;
class QTableWidget;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    void handleNewVehicleEntry(
        const QString& vehicleNumber,
        const QString& vehicleType,
        const QString& ownerName,
        const QString& phoneNumber,
        const QString& assignedSlot,
        const QDateTime& entryTime,
        bool isHandicapped
        );

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

    void on_addEntryButton_clicked();

    void on_processExitButton_clicked();

    void handleVehicleExited() ;

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    void initializeDatabase();
    bool createUser(const QString& email, const QString& password);
    bool authenticateUser(const QString& email, const QString& password);
    bool userExists(const QString& email);
    ParkingLotData parkingData;
    QList<ParkedVehicle> parkedVehicles;

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

    void setupAdminPage();
    CustomVehicle parseCustomVehicleFromString(const QString& itemText);


    bool canParkVehicle(const QString& vehicleType, bool isHandicappedRequest = false);

    void updateParkingTableDisplay();

    int getCurrentOccupancy(const QString& vehicleType, bool includeHandicapped = false);

};

#endif
