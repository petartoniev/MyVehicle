#ifndef CAR_H
#define CAR_H
#include "Tank.h"
#include "Engine.h"
#include "Transmission.h"

class Car
{
    private:
        int numSeats;
        int yearMade;
        Engine engine;
        Tank tank;
        Transmission transmission;
        int calcGear(int speed);
    public:
        Car();
        Car(int newNumSeats, int newYearMade, Engine newEngine, Tank newTank, Transmission newTransmission);

        int getNumSeats();
        int getYearMade();
        Engine getEngine();
        Tank getTank();
        Transmission getTransmission();
        void setNumSeats(int);
        void setYearMade(int);
        void setEngine(Engine);
        void setTank(Tank);
        void setTransmission(Transmission);
        double calculateEmissions();
        double calculateTax();
        double fuelConsumption(int);
        double maxAvailablePath(int);



};

#endif // CAR_H
