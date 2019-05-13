/* NAME: <Deverell Mays >  */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:
    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Natural Selection Game" << endl
         << " 1. Orange" << endl
         << " 2. Blue" << endl
         << " 3. Yellow" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;


    // TODO: Determine if the user wins, loses, or ties (or enters invalid input):
if (user_num == 1 && comp_num == 2)
{
    cout << "Orange beats blue! You Win! ";
}
else if (user_num == 2 && comp_num == 3)
{
    cout << "Blue beats Yellow! You Win! ";
}
else if (user_num == 3 && comp_num == 3)
{
    cout << "yellow beats Orange! You Win! ";
}
else if (user_num == 1 && comp_num == 3)
{
    cout << "Yellow beats Orange! You Lose! ";
}
else if (user_num == 3 && comp_num == 2)
{
    cout << "Blue beats Yellow! You Lose! ";
}
else if (user_num == 2 && comp_num == 1)
{
    cout << "Orange beats blue! You Lose! ";
}
else if (user_num == 1 && comp_num == 1)
{
    cout << "You both choose Orange! It's a Tie ! ";
}
else if (user_num == 2 && comp_num == 2)
{
    cout << "You both choose Blue! It's a Tie !  ";
}
else if (user_num == 3 && comp_num == 3)
{
    cout << "You both choose Yellow! It's a Tie ! ! ";
}
else if (user_num > 3)
{
    cout << " Error - Invalid Input. Terminating Program. ";
}
    // Exit the program:
    return 0;
}
