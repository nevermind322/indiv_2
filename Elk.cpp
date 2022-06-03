#include "Elk.h"

Animal* Elk::Interact(Animal& other)
{
    if (typeid(this).name() == typeid(other).name())
    {
        int hp = rand() % 10;
        int str = rand() % 4;
        Elk temp(hp, str);
        return &temp;
    }
    else
    {
        return nullptr;
    }
}
