#ifndef ADDVEHICLE_H
#define ADDVEHICLE_H
#include <QDialog>
#include <QString>
#include <QDateTime>

QT_BEGIN_NAMESPACE
namespace Ui { class AddVehicle; }
QT_END_NAMESPACE

class AddVehicle : public QDialog
{
    Q_OBJECT

public:
    explicit AddVehicle(QWidget *parent = nullptr);
    ~AddVehicle();
signals:
    void vehicleEntryAdded(
        const QString& vehicleNumber,
        const QString& vehicleType,
        const QString& ownerName,
        const QString& phoneNumber,
        const QString& assignedSlot,
        const QDateTime& entryTime,
        bool isHandicapped
        );

private slots:

    void on_addEntryConfirmButton_clicked();

     void on_cancelButton_clicked();

private:
    Ui::AddVehicle *ui;

};

#endif
