// NAME: <Deverell Mays!>

#include <iostream>
#include <iomanip>
using namespace std;

//TODO: Create your struct
struct Item {
    string name;
    double cost;
    int quantity;

};

int main()
{
    const int SIZE = 3;
    Item inventory[SIZE];
    int totalItems = 0,
        cheapestIndex = 0;
    double totalValue = 0;

    for(int i = 0; i < SIZE; i++)
    {
        //TODO: Prompt/read item information

        cout << "Product #" << i + 1 << endl;
        cout << "Enter name: ";
         cin >>inventory[i].name;


        cout << "Enter cost: ";
        cin >> inventory[i].cost;
        cout << "Enter quantity: ";
        cin >> inventory[i].quantity;
        //adds current item quanitity to total items
        totalItems += inventory[i].quantity;

        //adds current item value to total value
        totalValue += inventory[i].quantity * inventory[i].cost;

        //keeps track of the cheapest item's index
        if(inventory[cheapestIndex].cost > inventory[i].cost)
            cheapestIndex = i;

        totalItems += inventory[i].quantity;

        cout << endl << endl;
    }

    //TODO: output the total number of inventory items,
    //      the total cost of all the items, and the cheapest item.

    cout << "Total number of items\t: " << totalItems << endl;
    cout << "Total value of inventory: $" << totalValue << endl;
    cout << "Cheapest item\t\t: " << inventory[cheapestIndex].name << endl;




    return 0;
}
