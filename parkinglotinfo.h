#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <QString>
#include <QList>
#include <QDateTime>


struct CustomVehicle {
    QString vehicleType;
    double rate;
    int capacity;
    CustomVehicle() : rate(0.0), capacity(0) {}
    CustomVehicle(const QString& type, double r, int cap)
        : vehicleType(type), rate(r), capacity(cap) {}
};

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
    ParkingLotData() : carRate(0), carCapacity(0),
        bikeRate(0), bikeCapacity(0),
        busRate(0), busCapacity(0),
        minivanRate(0), minivanCapacity(0),
        handicappedSpots(0) {}
    bool isInitialized() const {
        return !name.isEmpty() && !location.isEmpty();
    }
};


struct ParkedVehicle {
    QString vehicleNumber;
    QString vehicleType;
    QString ownerName;
    QString phoneNumber;
    QString assignedSlot;
    QDateTime entryTime;
    QDateTime exitTime;
    bool isHandicapped;
    QString status;

    ParkedVehicle() : isHandicapped(false), status("Parked") {}


    ParkedVehicle(const QString& number, const QString& type, const QString& owner,
                  const QString& phone, const QString& slot, const QDateTime& entry,
                  bool handicapped, const QString& currentStatus = "Parked")
        : vehicleNumber(number), vehicleType(type), ownerName(owner), phoneNumber(phone),
        assignedSlot(slot), entryTime(entry), isHandicapped(handicapped), status(currentStatus) {}
};


#endif
