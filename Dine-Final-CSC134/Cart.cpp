#include "Cart.h"
#include "Item.h"
#include<iostream>
#include<iomanip>

using namespace std;

Cart::Cart(string cartName)
{
	Cart::name = cartName;
}


bool Cart::Purchase(Item item)
{
	if (Cart::count < 0) {
		Cart::count = 0;
	}
	if (Cart::count == 100) {
		return false;
	}
	else {
		Cart::arr[Cart::count] = item;
		Cart::count++;
		return true;
	}
	
}

void Cart::PrintTotal()
{
	double totalCost = 0;
	for (int i = 0; i < Cart::count; i++) {
		totalCost += Cart::arr[i].getCost();
	}
	cout << "The total cost of the purchase is: $" << fixed << setprecision(2) << totalCost << endl;
}
