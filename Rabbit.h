#pragma once
#include "Herbivore.h"
class Rabbit :
    public Herbivore
{
public:
    Rabbit(int hp, int l) : Herbivore("Rabbit", hp, l) {};

    // ������������ ����� Herbivore
    virtual Animal* Interact(Animal& other) override;
    
};

