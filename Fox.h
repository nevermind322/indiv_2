#pragma once
#include "Carnivore.h"
class Fox :
    public Carnivore
{
public:
    Fox(int hp, int str) : Carnivore("Fox", hp, str) {};
    // ������������ ����� Carnivore
    virtual Animal* Interact(Animal& other) override;
  
};

