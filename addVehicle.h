#ifndef ADDVEHICLEDIALOG_H
#define ADDVEHICLEDIALOG_H

#include <QDialog>
// QDateTime and QString are no longer directly included here as they are included in vehicledata.h
#include "vehicledata.h" // Include the shared VehicleData struct definition

// Forward declaration of the Ui::AddVehicleDialog class generated from addVehicle.ui
namespace Ui {
class AddVehicleDialog;
}

class AddVehicleDialog : public QDialog
{
    Q_OBJECT // Essential for Qt's signal/slot mechanism

public:
    // Constructor
    explicit AddVehicleDialog(QWidget *parent = nullptr);
    // Destructor
    ~AddVehicleDialog();

    // Public method to get the vehicle data after the dialog is accepted
    // Now returns the shared VehicleData type
    VehicleData getVehicleData() const;

private slots:
    // Slot for the "Submit" button click
    void on_submitButton_clicked();
    // Slot for the "Reset" / "Cancel" button click
    void on_cancelButton_clicked();

private:
    Ui::AddVehicleDialog *ui; // Pointer to the UI object

    // Private member to store the data internally before returning
    VehicleData m_vehicleData; // Now uses the shared VehicleData type
};

#endif // ADDVEHICLEDIALOG_H
