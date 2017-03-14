#include <iostream>
#include "Tank.h"
#include "Engine.h"
#include "Transmission.h"
#include "Car.h"
using namespace std;

int main()
{
    Tank myTank(40);
    Engine myEngine(116, 1900, diesel);
    Transmission myTransmission(manual, 5);
    Car myCar(4, 2001, myEngine, myTank, myTransmission);

    cout<<"The emissions caused by my car are: "<<myCar.calculateEmissions()<<endl;
    cout<<"The tax for my car is: "<<myCar.calculateTax()<<endl;
    int currentSpeed;
    cout<<"How fast is my car going currently? : ";
    cin>>currentSpeed;
    cout<<"My car is going "<<currentSpeed<<" km/h"<<endl;
    cout<<"The fuel consumption of my car is: "<<myCar.fuelConsumption(currentSpeed)<<" liters"<<endl;
    cout<<"The maximum available path with full tank is: "<<myCar.maxAvailablePath(currentSpeed)<<endl;
    return 0;
}
