#pragma once
#include <string>

using namespace std;

class Animal
{
public:
	Animal(string n, int hp) : name(n), health(hp) {};
	string name;
	int health;
	virtual Animal* Interact(Animal& other) = 0;
};

