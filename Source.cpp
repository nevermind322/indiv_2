#include "Fox.h"
#include "Wolf.h"
#include "Elk.h"
#include "Rabbit.h"

int main() {
	int r1 = 0;
	int r2 = 0;
	int r3 = 0;
	int arr_size = 20;
	Animal** arr = new Animal*[arr_size];
	for (int i = 0; i < arr_size; i++)
	{
		r1 = rand() % 4 + 1;
		r2 = rand() % 100 + 1; // str/luck
		r3 = rand() % 10 + 1; // hp
		switch (r1) {
		case 1:
			arr[i] = new Fox(r3, r2);
			break;
		case 2:
			arr[i] = new Rabbit(r3, r2);
			break;
		case 3:
			arr[i] = new Elk(r3, r2);
			break;
		case 4:
			arr[i] = new Wolf(r3, r2);
			break;
		}
	}

	int epochs = 21;

	for (int i = 0; i < epochs; i++)
	{
		if (arr_size > 1) {
			for (int j; j < arr_size; j++) {
				r1 = rand() % arr_size;
				if (r1 == j) r1 = r1 + 1 ? r1 != arr_size : r1 - 1;
				Animal* res =  arr[j]->Interact(*arr[r1]);
				if (res != nullptr) arr[arr_size++] = res;
			}
		}
		else break;

		//Выкинуть всех дохлых

	}
}