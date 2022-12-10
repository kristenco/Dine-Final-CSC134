#pragma once
#pragma once
#include "Item.h"
#include<string>
using namespace std;

class Cart
{
public:
    Cart(string name);
    bool Purchase(Item);
    void PrintTotal();
private:
    string name;
    int count;
    Item arr[100];
};
