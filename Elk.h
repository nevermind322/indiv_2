#pragma once
#include "Herbivore.h"
class Elk :
    public Herbivore
{
public:
    Elk(int hp, int l) : Herbivore("Elk", hp, l) {};

    // ������������ ����� Herbivore
    virtual Animal* Interact(Animal& other) override;
};