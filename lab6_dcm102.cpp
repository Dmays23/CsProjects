/* NAME: <Deverell Mays!>  */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL)); // needed to generate a randome number
    char repeat;
    int myMoney = 1000,
        bet,
        computer_roll,
        user_roll;

    cout << "Gambling is an addiction..." << endl << endl;

    // TODO: Create the loop that will run the gambling program:
    do
    {
        cout << " You curently have " << myMoney << endl;

        cout << " How much would you like to bet ?" << endl;

        while (myMoney >= bet)
        {
            cout << " ERROR: Invalid bet amount." << bet << endl;
            cin >> bet;
        }

        cout << " Enter the amount you would like to bet " << endl;
        cin >> bet;

        if (user_roll > computer_roll)
        {
            myMoney = myMoney - bet;
            cout << " you lose " << " $ "<< endl;
        }
        else if (user_roll < computer_roll)
        {
            myMoney = myMoney + bet ;
            cout << "You Win !!! " << " $ "<< endl;
        }
        else
        {
            cout <<" Tie " << endl;
        }
        cout << " Would you like to continue ? (Y OR N ) ";
        cin >> repeat ;
       }

       while (myMoney >= 0 || repeat == 'Y');



    // Output the result:
    cout << "You ended with $" << myMoney << endl;

    return 0;
}
