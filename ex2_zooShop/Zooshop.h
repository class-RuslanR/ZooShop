#pragma once
#include <iostream>
#include <string>

using namespace std;

class Zooshop
{
protected:
	int quantity, cost;
public:
	Zooshop();
	Zooshop(int count_pet, int cost_pet);
	~Zooshop();
	virtual void print();
};
