#pragma once
#include "Animal.h"
class Herbivore :
    public Animal
{
public:
    int luck;

    Herbivore(string n, int hp, int l) : Animal(n, hp), luck(l) {};

    virtual Animal* Interact(Animal& other) override = 0;
};

