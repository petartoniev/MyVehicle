#include "Tank.h"

Tank::Tank()
{
    capacity = 0;
}
Tank::Tank(int newCapacity)
{
    capacity = newCapacity;
}

int Tank::getCapacity()
{
    return capacity;
}
void Tank::setCapacity(int newCapacity)
{
    capacity = newCapacity;
}
