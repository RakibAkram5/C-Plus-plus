#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started." << endl;
    }
};

class Electric {
public:
    void charge() {
        cout << "Battery charging." << endl;
    }
};

class Vehicle : public Engine, public Electric {
public:
    void move() {
        cout << "Vehicle is moving." << endl;
    }
};

int main() {
    Vehicle myVehicle;
    myVehicle.start();  // Inherited from Engine
    myVehicle.charge(); // Inherited from Electric
    myVehicle.move();   // Defined in Vehicle
    return 0;
}

