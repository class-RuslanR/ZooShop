#include "pch.h"
#include <iostream>
#include <string>
#include "Pet.h"
#include <vector>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int quantityPet;
	Zooshop *p;
	Zooshop PetShop;
	p = &PetShop;
	p->print();
	/*Pet pet_params("Собака", 'M', 5, 20);
	p = &pet_params;
	p->print();*/
	cout << "Введите количество животных в магазине: ";
	cin >> quantityPet;
	Pet pet_params;
	vector<Pet> petArray;
	
	for (int i = 0; i < quantityPet; ++i) {
		pet_params.init();
		petArray.push_back(pet_params.getParamsPets());
	}
	for (int i = 0; i < quantityPet; ++i) {
		pet_params.print(petArray[i]);
		cout << "\n";
	}

	system("pause");
	return 0;
}


