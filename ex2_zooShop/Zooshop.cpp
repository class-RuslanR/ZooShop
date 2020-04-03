#include "pch.h"
#include "Zooshop.h"

Zooshop::Zooshop()
{
	quantity = 0;
	cost = 0;
}

Zooshop::Zooshop(int count_pet, int cost_pet) : quantity(count_pet), cost(cost_pet)
{
}

Zooshop::~Zooshop()
{
}

void Zooshop::print()
{
	cout << "Зоомагазин открыт" << endl;
}

