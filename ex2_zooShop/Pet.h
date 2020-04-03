#pragma once
#include<string>
#include <iostream>
#include "Zooshop.h"

using namespace std;

class Pet : public Zooshop {
	string pet;
	char sex;
public:
	Pet();
	Pet(string kind_pet, char sex_type, int count_pet, int cost_pet);
	~Pet();
	void print(Pet arrayPet);
	void init();
	Pet getParamsPets();
};