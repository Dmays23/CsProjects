

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

 int computer_roll;
    int user_roll;
    int userBalance = 1000; //user begins game with $1000
    int userBetAmount = 0;
    char choice;


 int placebet();
 int GetRoll();
 char PlayAgain();


int main()
{
    int placebet();
    int getRoll();
    char PlayAgain();


    int computer_roll;
    int user_roll;
    int userBalance = 1000; //user begins game with $1000
    int userBetAmount = 0;
    char choice;

    srand(time(NULL));

    cout << "Gambling is an addiction..." << endl << endl;

    do{
          int placebet();

        cout << "You currently have $" << userBalance << endl;
        cout << "How much would you like to bet?" << endl;
        cout << "$";
        cin >> userBetAmount;

        while(userBetAmount > userBalance || userBetAmount < 1)
        {
            cout << "ERROR: Invalid bet amount." << endl;
            cout << "Enter the amount you would like to bet: $";
            cin >> userBetAmount;
        }

        computer_roll = rand()%6+1;
        user_roll = rand()%6+1;

       int getroll();

        cout << "You rolled " << user_roll << endl;
        cout << "Your opponent rolled " << computer_roll << endl;

        if(user_roll > computer_roll)
        {
            userBalance += userBetAmount;
            cout << "You gain $" << userBetAmount << endl;
        }
        else
        {
            userBalance -= userBetAmount;
            cout << "You lose $" << userBetAmount << endl;
        }

        if(userBalance >= 1)
        {
            {
                char playAgain();
            }
            cout << "Would you like to continue? (Y or N): ";
            cin >> choice;
            cout << endl << endl;

         }
         return 0;
    }





    while(userBalance >= 1 && choice != 'n' && choice != 'N');

    if(userBalance < 1)
       cout << "You are out of money. You can't play anymore." << endl << endl;

    cout << "You ended with $" << userBalance << endl;

    return 0;
}

