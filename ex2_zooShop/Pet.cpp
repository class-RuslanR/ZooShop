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
	cout << "��� ���������: " << pet << " ���: " << sex 
		<< " ����������: " << quantity << " ���������: " << cost << "\n\n";
}

void Pet::init(){
	cout << "������� ��� ���������: ";
	cin >> pet;
	cout << "������� ��� ���������: ";
	cin >> sex;
	cout << "������� ���������� �������� ������� ����: ";
	cin >> quantity;
	cout << "������� ���������: ";
	cin >> cost;
}

Pet Pet::getParamsPets()
{
	return Pet();
}
