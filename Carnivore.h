#pragma once
#include "Animal.h"
class Carnivore :
    public Animal
{
public:
    int strenght;
    
    Carnivore(string n, int hp, int str) : Animal(n, hp), strenght(str) {};

    // Унаследовано через Animal
    virtual Animal* Interact(Animal& other) override = 0;
};

