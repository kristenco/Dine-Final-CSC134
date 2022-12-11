#include "Item.h"

Item::Item()
{
	Item::itemName = "";
	Item::cost = 0.0;
}

Item::Item(string& name, double& cost)
{
	Item::itemName = name;
	Item::cost = cost;
}

string Item::getName()
{
	return itemName;
}

double Item::getCost()
{
	return cost;
}