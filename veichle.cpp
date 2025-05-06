#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <unordered_map>
using namespace std;

static int count = 0 ;
class customer {
private:
    string name;
    string phone;
    string email;

public:
  customer(){
   cout << "Enter your name: " ;
   getline(cin, name) ;
    cout << "Enter your phone number: " ;
    getline(cin, phone) ;
    cout << "Enter your email: " ;
    getline(cin, email) ;
    }

    string getname(){
        return name ;
    }

    string getphone(){
        return phone ;
    }
};


class basevehciles  : public customer {
protected:
    string vehicletype;
    string vehiclenumber;
    string color;
    time_t parkingtime_start;
    time_t parkingtime_end;
    int slot_number ;
    int ticket_number ;
    float charges ;
    int billNo;

public: 
 virtual void getticket(int slot_number) {
        slot_number = slot_number ;
        cout << "Enter your vehicle type: " ;
        getline(cin, vehicletype) ;
        parkingtime_start = time(0) ;
        ::count++ ;
        ticket_number = ::count ;
        system("cls") ;
 }
     
     int getticketno(){
        return ticket_number ;
     }

     int getslotno(){
        return slot_number ;
}

  virtual void calculatefee() = 0;

  void displayBill() {
    cout << "******** XYZ PARKING BILL ********";
    cout << "\nBill Number: " << billNo;
    cout << "\n" << vehicletype << " Number: " << vehiclenumber;
    cout << "\nParking Spot: " << slot_number;
    cout << "\nEntry Time: " << ctime(&parkingtime_start);
    cout << "\nExit Time: " << ctime(&parkingtime_end);
    cout << "\nTotal Charges: Rs. " << charges << endl;
    cout << "\nUnpaid\n";
    cout << "\nEnter any key to return...";
}
};


class Bike : public basevehciles{
    public:
        Bike() { vehicletype = "Bike"; }



        void calculatefee() override {
            long long duration = parkingtime_end - parkingtime_start;
            int mins = duration / 60;
            int hours = mins / 60;
            if (hours == 0) charges = 20;
            else charges = 20 + (hours * 10);
            displayBill();
        }
    };
    

class Car : public basevehciles{

    public:
        Car() { vehicletype = "Car"; }



        void calculatefee() override {
            long long duration = parkingtime_end - parkingtime_start;
            int mins = duration / 60;
            int hours = mins / 60;
            if (hours == 0) charges = 50;
            else charges = 30 + (hours * 50);
            displayBill();
        }

};



class bus : public basevehciles{

    public:
        bus() { vehicletype = "Bus"; }



        void calculatefee() override {
            long long duration = parkingtime_end - parkingtime_start;
            int mins = duration / 60;
            int hours = mins / 60;
            if (hours == 0) charges = 100;
            else charges = 100 + (hours * 50);
            displayBill();
        }

};



class parkinglot{

private:
    
int capacity;
int totalFilled;
vector<bool> parkingSpaces;
vector<basevehciles*> v;
public:
    parkinglot()
    {
        capacity = 100;
        totalFilled = 0;
        for(int i=0;i<capacity;++i)
            parkingSpaces.push_back(false);
    }
    bool ifSlotAvailable()
    {
        if(totalFilled==capacity)
            return false;
        else
            return true;
    }
    int getFreeSlot()
    {
        for(int i=0;i<capacity;++i)
        {
            if(parkingSpaces[i]==false)
            {
                parkingSpaces[i]=true;
                totalFilled++;
                return i+1;
            }
        }
        return -1;
    }
    void newVehicle(basevehciles* x)
    {
        v.push_back(x);
    }
    void deleteVehicle(int slot)
    {
        parkingSpaces[slot-1] = false;
        totalFilled--;
    }
    basevehciles* findDepartingCar(int t) 
    {
        for(int i=0; i < v.size(); ++i)
        {
            int s = v[i]->getticketno();
            if(t == s)
                return v[i];
        }
        return nullptr;
    }
    int getCapacity()
    {
        return capacity;
    }
    int getTotalFilled()
    {
        return totalFilled;
    }
    void emptyParkingSpotsList() 
    {
        for(int i=0;i<parkingSpaces.size();++i)
        {
            if(parkingSpaces[i]==false)
                cout<<i+1<<", ";
        }
    }
    void occupiedParkingSpotsList() 
    {
        for(int i=0;i<parkingSpaces.size();++i)
        {
            if(parkingSpaces[i]==true)
                cout<<i+1<<", ";
        }
    }
};


void carArrival(parkinglot& pl)
{
if(pl.ifSlotAvailable())
{
    int slot = pl.getFreeSlot();
    cout << "Select Vehicle Type:" << endl;
    cout << "1. Bike" << endl;
    cout << "2. Car" << endl;
    cout << "3. Bus" << endl;
    cout << "Enter your choice: ";
    int vehicleType;
    cin >> vehicleType;
    cin.ignore();

    basevehciles* obj = nullptr;
    if (vehicleType == 1) {
        obj = new Bike();
    } else if (vehicleType == 2) {
        obj = new Car();
    } else if (vehicleType == 3) {
        obj = new bus();
    } else {
        cout << "Invalid vehicle type!" << endl;
        return;
    }

    obj->getticket(slot);
    pl.newVehicle(obj);
}
else
{
    cout<<"Sorry no empty parking space available!";
}
};


















































int main() {
    int choice ;
}


   





















































































































































