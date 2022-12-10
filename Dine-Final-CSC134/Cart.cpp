#include "Cart.h"
#include "Item.h"
#include<iostream>

using namespace std;

Cart::Cart(string cartName)
{
	Cart::name = cartName;
}


bool Cart::Purchase(Item)
{
	if (Cart::count == 100) {
		return false;
	}
	else {
		return true;
	}
}

void Cart::PrintTotal()
{

	int arrayLength = sizeof(Cart::arr) / sizeof(int);
	cout << arrayLength << endl;
	for (int i=0; i < arrayLength; i++)
	{
		if (arr[i].getName() == "") {
			cout << "empty" << endl;
		}
		else {
			cout << "not empty" << endl;
		}
		//cout << i << endl;
		//cout << Cart::arr[i].getName() << endl;
		//cout << Cart::arr[i].getCost() << endl;
	}
}
