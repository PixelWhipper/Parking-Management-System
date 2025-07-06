#ifndef VEHICLE_DATA_H
#define VEHICLE_DATA_H

#include <QDateTime> // Required for QDateTime
#include <QString>   // Required for QString

// This struct defines the common data structure for a vehicle.
// It is placed in its own header file to ensure it's a single,
// canonical type accessible by all classes that need to use it.
struct VehicleData {
    QDateTime timestamp;
    QString category;
    QString vehicleNumber;
    double pricePerHour;
    QString driverName;
};

#endif // VEHICLE_DATA_H
