#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <QString>
#include <QMap>

class VehicleInfo {
public:
    VehicleInfo(double rate = 0.0, int capacity = 0);
    double getRate() const;
    int getCapacity() const;
    void setRate(double rate);
    void setCapacity(int capacity);
private:
    double m_rate;
    int m_capacity;
};

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
};

// Declaration only - no definition in header
extern ParkingLotData parkingData;

#endif
