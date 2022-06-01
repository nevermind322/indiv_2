#include "Fox.h"
#include "Herbivore.h"

Animal* Fox::Interact(Animal& other)
{
    Herbivore* pH = dynamic_cast<Herbivore*>(&other);
    if (typeid(this).name() == typeid(other).name()) // ��� ���� ����
    {
        int hp = rand() % 10;
        int str = rand() % 4;
        Fox temp(hp, str);
        return &temp; // ����������� ��� ���� ����� 
    }
    else
        if (pH != nullptr) // ������ � ������ 
        {
            int r = rand() % 100 + 1;
            if (r < pH->luck)
            {
                this->health--;
                return nullptr; // ������ �������� 
            }
            else
                pH->health = 0;
            return nullptr; // ������ ������� 
        }
        else
            return nullptr; // ������ � ������
}
