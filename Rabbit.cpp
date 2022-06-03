#include "Rabbit.h"

Animal* Rabbit::Interact(Animal& other)
{
	if (typeid(this).name() == typeid(other).name())
	{
		int hp = rand() % 10;
		int str = rand() % 4;
		Rabbit temp(hp, str);
		return &temp;
	}
	else
	{
		return nullptr;
	}
}
