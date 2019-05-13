

#include <iostream>
using namespace std;


void jedi_Level();
double calcLevel();
int whatever();
string somesentence();


int main()
{

    double jedilvl;

    int age;
    int weight;
    int mcc;


   jedi_Level();
   jedilvl=calcLevel();




    // this should remain inside your main function
    cout << "Your Jedi Level is : " << jedilvl;

    return 0;
}

    void jedi_Level()
    {
        cout << "Welcome to my fabulous Jedi power level calculator!" << endl
         << "This program will take your age, weight, and" << endl
         << "midichlorean count and return your Jedi power level!"
         << endl << endl;

    }

    // TODO - write a function that will prompt the user for his/her age,
    // weight, and midicholrean count. Then calculate and return their
    // jedi level (returns a double). Remember to assign the retuned value
    // to the variable 'jedi_level'.
     double calcLevel()
     {

    int age;
    int weight;
    int mcc;





    cout << "please enter your age : ";
    cin >> age;
    cout << "please enter your weight : ";
    cin >> weight;
    cout << "please enter your midicholrean count : ";
    cin >> mcc;
    double jedi_Level = static_cast <double>(mcc * age) / (weight * weight);

    return jedi_Level;
}








