#include "Engine.h"

Engine::Engine()
{
    hp = 0;
    volume = 0;
    type = electric;
}
Engine::Engine(int newHp, int newVolume, engineType newType)
{
    hp = newHp;
    volume = newVolume;
    type = newType;
}

Engine::~Engine()
{

}

int Engine::getHp()
{
    return hp;
}
int Engine::getVolume()
{
    return volume;
}
int Engine::getType()
{
    return type;
}
void Engine::setHp(int newHp)
{
    hp = newHp;
}
void Engine::setVolume(int newVolume)
{
    volume = newVolume;
}
void Engine::setType(engineType newType)
{
    type = newType;
}
