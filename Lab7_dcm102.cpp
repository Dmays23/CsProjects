/* NAME: <Deverell Mays!>  */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 6; //number of movies
    const string GAMES[] = {"The Matrix",
                            "Fight Club",
                            "Spirited Away",
                            "Alien",
                            "Seven Samurai",
                            "Back to the Future"};

    double ratings[SIZE];
    double total = 0,
           average;
    int highest_index = 0;

    //Prompt the user for movie ratings
    cout << "Please enter a rating for the following movies:" << endl;
    for(int i = 0; i < SIZE; i++)
    {
        cout << GAMES[i] <<setw(15)<< "  : ";
        cin >> ratings [i];

        total = total + ratings[i];

        if ( ratings [i] > ratings [highest_index])
        {
            highest_index = i;
        }
        // TODO: Take user input for movie rating HERE
    }
      average = total / 6;
      cout << " Average Rating "<< "  :  "<< average << endl;
    // TODO: Determine the average rating
      cout << " Highest rating "<< "  :  "<< highest_index [ratings] << endl;
    // TODO: Determine the index of the movie with the highest rating


    cout << fixed << setprecision(1)
         << "Average rating : " << average << endl
         << "Highest rating : " << ratings[highest_index] << " rated " << GAMES[highest_index] << endl;

    return 0;
}
