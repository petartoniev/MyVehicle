#include "Transmission.h"

Transmission::Transmission()
{
   type = automatic;
   gearLevel = 0;
}
Transmission::Transmission(transmissionType newType, int newGearLevel)
{
    type = newType;
    gearLevel = newGearLevel;
}

int Transmission::getType()
{
    return type;
}
int Transmission::getGearLevel()
{
    return gearLevel;
}
void Transmission::setType(transmissionType newType)
{
    type = newType;
}
void Transmission::setGearLevel(int newGearLevel)
{
    gearLevel = newGearLevel;
}
