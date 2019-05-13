/* NAME: <Deverell Mays!>  */

#include <iostream>
using namespace std;

int main() {

    int length, hidden_multiple;

    // Prompt the user for the length
    // and the multiple they want hidden:
    cout << "Sequence Generator 2000!" << endl
         << "Enter the length: ";
    cin >> length;
    cout << "Multiples of what number should be hidden: ";
    cin >> hidden_multiple;
    cout << endl;

    // Validate input, then print the sequence:

for (int i = 1; i <= length; i++)
    {
        cout <<"|";
        if (i%hidden_multiple==0)
            cout <<"#";
        else
            cout << i;

    }

    return 0;
}
