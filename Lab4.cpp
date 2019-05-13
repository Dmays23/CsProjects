/* NAME: <Deverell mays !>  */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char user_choice;  //user's choice
    double price; //price of monthly package

    // Ask the user for their plan choice:
    cout << "Enter the package name you wish to purchase: ";
    cin >> user_choice;

    // TODO: Use a switch statement to evaluate the total cost of the
    // customer’s monthly bill based on the selected plan.
    switch (user_choice)
    {

        case 'A':
        price = 19.99;
        cout << " Would you like to purchase the sports plan ? (Y/N) ";
        cin >>user_choice;
        switch (user_choice)
        {
          case 'y':
              price = 19.99 +9.99;
              break;
          case 'n':
            price = 19.99;


        }
        break;

        case 'B':
        price = 39.99;
        cout << " Would you like to purchase the sports plan ? (Y/N) ";
        cin >>user_choice;
        switch (user_choice)
        {
          case 'y':
              price = 39.99 +9.99;
              break;
          case 'n':
            price = 39.99;


        }
        break;

        case 'C':
        price = 45.99;
        break;

        default:
        cout << "Invalid Input, terminating the program" << endl;

    }



    cout << "The total price of your monthly package is $" << price << endl;

    // Exit the program:
    return 0;
}
