// Kristen Dine CSC0-134-4271 FinalExam
#include "Cart.h"
#include "Item.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
    char choice = ' ';
    string itemName = "";
    string cartName = "User's Cart";
    double cost = 0.0;
    bool added;
    // create a Cart object
    Cart myCart(cartName);



    cout << "Would you like to puchase an item from the store (y/n)? ";
    cin >> choice;
    choice = tolower(choice);
    while (choice == 'y')
    {
        cin.ignore();
        cout << "What is the name of the item that you like to purchase? ";
        getline(cin, itemName);
        cout << "What is the cost of the item? ";
        cin >> cost;
        // create an Item object 
        Item myItem(itemName, cost);



        // call cart object’s Purchase function to add item in the cart array
        added = myCart.Purchase(myItem);


        
            if (!added)
            {
                cout << "Error: You have exceeded the limit of allowed purchases." << endl;
                break;
            }
        
        // ask user to input next purchased item name and cost
        cout << "Would you like to puchase an item from the store (y/n)? ";
        cin >> choice;
        choice = tolower(choice);


    }
    // call cart object’s function to calculate and display total cost
    myCart.PrintTotal();



    return 0;
}
