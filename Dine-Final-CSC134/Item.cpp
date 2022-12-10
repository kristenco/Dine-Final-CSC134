#include "Item.h"

Item::Item()
{
	Item::name = "";
	Item::cost = 0.0;
}

Item::Item(string name, double cost)
{
	Item::name = name;
	Item::cost = cost;
}

string Item::getName()
{
	return name;
}

double Item::getCost()
{
	return cost;
}