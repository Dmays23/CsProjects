
/* NAME: <Deverell Mays!>  */

#include <iostream>
using namespace std;

int main( )
{

    int midi_chlorians;
    int age;
    double iq;
    double jedi_level;

    // TO-DO: Declare the rest of the variables (age, iq, jedi_level)

    // Prompt the user for midi-chlorian count and store:
    cout << " What is your midi-chlorian count ? " << endl;
    cin >> midi_chlorians;

    // TO-DO: Prompt for and store the user's age and iq:

    cout << " What is your Age ? " << endl;
    cin >> age;

    cout << " What is your iq ? " << endl;
    cin >> iq;

    // TO-DO: Calculate and assign the user's Jedi level to the
    //        appropriate variable:
    jedi_level = (( midi_chlorians * age) / (90000 - (iq * iq)));

    // TO-DO: Display the user's Jedi Level to the console:
     cout << " Your Jedi Level Is ? " << jedi_level << endl;

    // Exit the program:
    return 0;
}
