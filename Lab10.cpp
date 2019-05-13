#include <iostream>
using namespace std;

bool isValidChoice(char);
float calcTotal(int, float);
float calcChange (float, float);


int main ()
{
    int User_Number;
    char User_choice;
    float TotalwithTax;
    int total;
    float change;
    float Payment;
    float cost;
    cout << "Welcome to the Vend - o - mattic ! Here are your choices:"<< endl;
    cout << "a) Ice Cream - $2.75" << endl
         << "b) Candy - $1.25" << endl
         << "c) Soda - $1.50" << endl
         << "d) Gum -$0.50" << endl;

    cout << "Please select an item" << " : ";
    cin >> User_choice;

    if (User_choice == 'a')
        cost = 2.75;
        else if (User_choice == 'b')
        cost = 1.25;
        else if (User_choice == 'c')
        cost = 1.50;
        else if (User_choice == 'd')
         cost = 0.50;

    cout << "Enter Quantity" << " : " ;
    cin >> User_Number;

    while (isValidChoice (User_choice))
    {
        cout << " ERROR : Invalid choice. Please reenter:";
        cin >> User_choice;
    }

      while (User_Number < 1 || User_Number > 20)
     {
      cout << " ERROR : Invalid Quantity. Please reenter:";
        cin >> User_Number;
     }


     TotalwithTax = calcTotal( User_Number, total);

     cout << " Total with Tax" << " : " <<  TotalwithTax << endl;

     change = calcChange( Payment, change );
     cout << " Enter Payment Amount" << " : " << endl;

     cout << " Your Change due is " << " : " << endl;
}

bool isValidChoice(char User_choice)
{
 if ( User_choice == 'a'|| User_choice == 'b' || User_choice == 'c' || User_choice == 'd')
    return false;
 else
    return true;
}

float calcTotal(int subtotal, float TotalwithTax)
{

float tax = 0.0825;
float TotalWithTax;

TotalWithTax = subtotal + tax;

}
float calcChange (float payment , float change)
{

}
