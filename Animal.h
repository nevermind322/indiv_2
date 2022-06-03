#pragma once
#include <string>
#include <typeinfo>
#include <iostream>

using namespace std;

class Animal
{
public:
	Animal(string n, int hp) : name(n), health(hp) {
		cout << name << " was born"<<endl;
	};
	string name;
	int health;
	virtual Animal* Interact(Animal& other) = 0;
	virtual ~Animal() {
		cout << name << " died"<<endl;
	}
};

