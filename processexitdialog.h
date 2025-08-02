#ifndef PROCESSEXITDIALOG_H
#define PROCESSEXITDIALOG_H
#include <QDialog>
#include <QWidget>
#include <QString>
#include <QDateTime>
#include <QPushButton>
#include <QList>
#include "parkinglotinfo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ProcessExitDialog; }
QT_END_NAMESPACE

class ProcessExitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProcessExitDialog(QList<ParkedVehicle>& vehicles, const ParkingLotData& parkingData, QWidget *parent = nullptr);
    ~ProcessExitDialog();

    void displayVehicleInfo(const QString &vehicleNumber, const QString &vehicleType,
                            const QString &ownerName, const QString &phoneNumber,
                            const QString &assignedSlot, const QDateTime &entryTime,
                            bool isHandicapped);
    void showVehicleNotFound(const QString &vehicleNumber);
    void clearForm();
    void showExitSuccess(const QString &vehicleNumber, double totalFare, double duration);

signals:
    void vehicleExited();

private slots:
    void on_searchButton_clicked();

    void on_processExitButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::ProcessExitDialog *ui;
    QList<ParkedVehicle>& parkedVehicles;
    const ParkingLotData& parkingData;

    void clearVehicleInfo();
    double calculateFare(const QString& vehicleType, const QDateTime& entryTime, const QDateTime& exitTime);
    ParkedVehicle* findParkedVehicle(const QString& vehicleNumber);
};


#endif
