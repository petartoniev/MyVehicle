#ifndef ENGINE_H
#define ENGINE_H
enum engineType
{
    electric = 0,
    hybrid = 1,
    gasoline = 2,
    diesel = 3
};

class Engine
{
    private:
          int hp;
          int volume;
          engineType type;


    public:
        Engine();
        Engine(int newHp, int newVolume, engineType newType);
        int getHp();
        int getVolume();
        int getType();
        void setHp(int);
        void setVolume(int);
        void setType(engineType);

        ~Engine();





};

#endif
