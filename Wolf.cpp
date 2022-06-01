#include "Wolf.h"
#include "Herbivore.h"

Animal* Wolf::Interact(Animal& other)
{
    Herbivore* pH = dynamic_cast<Herbivore*>(&other);
    if (typeid(this).name() == typeid(other).name()) // Оба типа волк
    {
        int hp = rand() % 10;
        int str = rand() % 4;
        Wolf temp(hp, str);
        return &temp; // Порождается еще одна особь 
    }
    else
        if (pH != nullptr) // Хищник и жертва 
        {
            int r = rand() % 100 + 1;
            if (r < pH->luck)
            {
                this->health--;
                return nullptr; // Жертва выживает 
            }
            else
                pH->health = 0;
            return nullptr; // Жертва умирает 
        }
        else
            return nullptr; // Хищник и хищникreturn nullptr;
}
