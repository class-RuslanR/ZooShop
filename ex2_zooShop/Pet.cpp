#include "pch.h"
#include "Pet.h"
#include <string>
#include <iostream>

using namespace std;


Pet::Pet()
{
	pet ="\0";
	sex = '\0';
}

Pet::Pet(string kind_pet, char sexType, int count_pet, int cost_pet) : Zooshop(count_pet, cost_pet)
{
	pet = kind_pet;
	sex = sexType;
}

Pet::~Pet()
{
}

void Pet::print(Pet arrayPet)
{
	cout << "Вид животного: " << pet << " Пол: " << sex 
		<< " Количество: " << quantity << " Стоимость: " << cost << "\n\n";
}

void Pet::init(){
	cout << "Введите тип животного: ";
	cin >> pet;
	cout << "Введите пол животного: ";
	cin >> sex;
	cout << "Введите количество животных данного типа: ";
	cin >> quantity;
	cout << "Введите стоимость: ";
	cin >> cost;
}

Pet Pet::getParamsPets()
{
	return Pet();
}
