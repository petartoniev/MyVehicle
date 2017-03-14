#ifndef TRANSMISSION_H
#define TRANSMISSION_H
enum transmissionType
{
    automatic = 0,
    manual = 1
};

class Transmission
{
    private:
        transmissionType type;
        int gearLevel;
    public:
        Transmission();
        Transmission(transmissionType newType, int newGearLevel);
        int getType();
        int getGearLevel();
        void setType(transmissionType);
        void setGearLevel(int);





};

#endif

