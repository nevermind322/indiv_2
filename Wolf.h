#pragma once
#include "Carnivore.h"
class Wolf :
    public Carnivore
{
public:

    Wolf(int hp, int str) : Carnivore("Wolf", hp, str) {};

    // ������������ ����� Carnivore
    virtual Animal* Interact(Animal& other) override;

};

