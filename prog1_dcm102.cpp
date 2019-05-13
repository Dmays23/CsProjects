/*
   File: prog1_dcm102.cpp

   Author: Deverell Mays
   C.S.1428.501
   Lab Section: L01
   Program: #1
   Due Date: 06/11/18

   This program will prompt the user for the three radius values of an
   ellipsoid (in inches). Three different prompts are used in consideration
   of the user. The program allows for real input data. It calculates the
   volume of the ellipsoid. It then writes the identifying information of
   the author (or authors) and the three radius values of the ellipsoid
   along with the calculated volume to the console screen. The layout and
   content of the console screen are shown in the sample below.

   Input (keyboard): radius1, radius2, radius3  (doubles)
   Constants:        PI = 3.141592 (double)
   Output (screen):
             Author's Name
             C.S.1428.?          // '?' represents student's lecture section #
             Lab Section: L?     // '?' represents student's lab section #
             --/--/--            // dashes represent due date, month/day/year
                <blank line>
             The volume of an ellipsoid with radius values
             ?, ? and ? inches is ? cubic inches.

   =======================================================================

   <Output will vary based on actual input values.>

*/

#include <iostream>

#include <cstdlib>

using namespace std;

int main ( )
{
    const double PI = 3.141592;

    double radius_1,
           radius_2,
           radius_3;

    double Volume_Ellipsoid;

    cout << " Enter Value of First Radius (in inches) " << " : ";
    cin >> radius_1;

    cout << " Enter Value of Second Radius (in inches) " << " : ";
    cin >> radius_2;

    cout << " Enter Value of Third Radius (in inches) " << " : ";
    cin >> radius_3;

    Volume_Ellipsoid = (4.0/3.0) * PI * radius_1 * radius_2 * radius_3;

    cout << endl << endl;

    cout << " Deverell Mays " << endl << " C.S.1428.501 " << endl
         << " Lab Section : L01 " << endl << " 06/11/2018" << endl << endl;

    cout << "The Volume of an Ellipsoid with the radius values "<< endl
         << radius_1 << " , " << radius_2 << " and last " << radius_3
         << " inches is " << Volume_Ellipsoid << endl;

    system("PAUSE>NUL");

    return 0;
}













