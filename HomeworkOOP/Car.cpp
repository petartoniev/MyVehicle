#include "Car.h"
#include "Tank.h"
#include "Engine.h"
#include "Transmission.h"

Car::Car()
{
    numSeats = 0;
    yearMade = 0;
}
Car::Car(int newNumSeats, int newYearMade, Engine newEngine, Tank newTank, Transmission newTransmission)
{
    numSeats = newNumSeats;
    yearMade = newYearMade;
    engine = newEngine;
    tank = newTank;
    transmission = newTransmission;
}

int Car::getNumSeats()
{
    return numSeats;
}
int Car::getYearMade()
{
    return yearMade;
}
Engine Car::getEngine()
{
    return engine;
}
Tank Car::getTank()
{
    return tank;
}
Transmission Car::getTransmission()
{
    return transmission;
}
void Car::setNumSeats(int newNumSeats)
{
    numSeats = newNumSeats;
}
void Car::setYearMade(int newYearMade)
{
    yearMade = newYearMade;
}
void Car::setEngine(Engine newEngine)
{
    engine = newEngine;
}
void Car::setTank(Tank newTank)
{
    tank = newTank;
}
void Car::setTransmission(Transmission newTransmission)
{
    transmission = newTransmission;
}

double Car::calculateEmissions()
{
    int k = double(engine.getType());
    double emissions = k * double(engine.getHp()) * double(engine.getVolume());
    return emissions;
}
double Car::calculateTax()
{
    double tax;
    if(engine.getHp()<105)
    {
        tax = double(engine.getHp()) * 0.8;
    } else { tax = engine.getHp() * 0.9;}

    double yearVariety = 2017 - yearMade;
    if(yearVariety >= 5 && yearVariety <= 14) tax*=1.5;
    if(yearVariety < 5) tax*=2.8;
    return tax;
}

int Car::calcGear(int speed)
{
    if(speed <= 20) return 1;
    if(speed >20 && speed<=30) return 2;
    if(speed >30 && speed<=50) return 3;
    if(speed >50 && speed<=80) return 4;
    if(speed >80 && speed<=200) return 5;
    if(speed>200) return 6;
}

double Car::fuelConsumption(int speed)
{
    int currentGear = calcGear(speed);
    double fuelConsumption = (currentGear * double(engine.getHp()) * double(engine.getVolume())/1000)/100;
    return fuelConsumption;
}

double Car::maxAvailablePath(int speed)
{
    double consPerLitre = 100.0 / fuelConsumption(speed);
    double maxPath = consPerLitre * double(tank.getCapacity());
    return maxPath;
}

