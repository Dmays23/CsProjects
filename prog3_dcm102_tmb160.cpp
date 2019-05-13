/*
   File: prog3_dcm102_tmb160.cpp

   Author: Deverell Mays, Toby Brinlee
   C.S.1428.501
   Lab Section: L01, L01
   Program: #3
   Due Date: 06/19/18

   This program displays a menu of multiple geometry calculator options
   along with a prompt for the user to enter his/her menu choice. (See
   layout below.)

   Geometry Calculator

   1. Calculate the volume of a sphere.
   2. Calculate the volume of a pyramid with a square base.
   3. Calculate the volume a cone.
   4. Quit.

   Enter your choice ( 1 - 4 ):

   ====================================================================

   If the user enters 1, the program will prompt the user for the radius
   of the sphere. It will then display the radius and the calculated volume
   of the sphere based on the standard formula:  v = 4/3 PI r3

   If the user enters 2, the program will prompt the user for the length
   of one side of the the pyramid's base. It will then prompt the user for
   the height of the pyramid. The program will then display the length of
   one side of the pyramid's base, the height of the pyramid and volume of
   the pyramid based on the standard formula:
   v = 1/3 b h (b is the area of the base)

   If the user enters 3, the program will prompt the user for the radius
   of the cone's base. It will then prompt the user for the height of the
   cone. The program will then display the radius of the cone's base, the
   height of the cone and volume of the cone based on the standard formula:
   v = 1/3 PI r2 h

   All output values for choices 1-3 will be appropriately labeled by
   descriptive terms or by including them in complete sentence form.

   If the user enters the maximum menu choice, the program will end by
   displaying an appropriate 'sign off' message to the screen.

   Notes:
    - With the exception of the menu choices, all input data are real and
      measured in inches.
    - The order of operands in all standard formulas is maintained.
    - No single letter variable names are used in standard formulas.
    - 3.14159 is used for the value of PI.
    - The pow function is used for calculations involving exponentiation.
    - A named constant is used to represent the maximum menu choice to
      allow expansion of the menu options.
    - The author's identifying information is displayed on the first three
      lines of the screen followed by two blank lines and the
      display of the geometric calculator menu.
    - Two blank lines are left before the first prompt in each case and
      again before any output message displayed on the screen.
    - All output values are appropriately labeled either by use of
      descriptive terms or by including them in complete sentence form.
    - Calculated results are displayed to two decimal places.

   Input validation is limited to the following situations:
   1) If the user enters a number outside the range of 1 - MAX_CHOICE when
      selecting a menu item, an appropriate error message is displayed on
      the screen.
   2) If the user fails to enter a value greater than zero for radius, base
      and/or height values an appropriate error message is displayed on the
      screen.
   3) In the event that erroneous input is entered as in #1 or #2 above,
      the program will terminate after a message appropriate to the
      situation is displayed on the screen.

   Input (keyboard): menu choice - integer
                     radius (sphere, cone) - double
                     base length (pyramid), height (pyramid, cone) - double

   Constants: PI = 3.14159 (double)
              MAX_CHOICE (integer)       // last menu choice

   Sample Output Screen:
              Author's Name
              C.S.1428.?          // '?' represents student's lecture section #
              Lab Section: L?     // '?' represents student's lab section #
              --/--/--            // dashes represent due date, month/day/year
                    <blank line>
                    <blank line>
              Geometry Calculator
              1. Calculate the volume of a sphere.
              2. Calculate the volume of a pyramid with a square base.
              3. Calculate the volume of a cone.
              4. Quit
                    <blank line>
              Enter your choice ( 1 - 4 ):
                    <blank line>
                    <blank line>
              Prompt(s)...
                     <blank line>
                     <blank line>
              <display of the input value(s) needed to determine the volume
               of the geometric figure and the calculated volume of the
               figure either appropriately labeled or in sentence form>

   =================================================================

   <Output will vary based on input values.>

*/

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main ( )
{
    const int MAX_CHOICE = 4 ;

    const double PI = 3.14159;

    int user_choice;

    double base_length,
           height,
           volume,
           radius;

     cout << "Deverell Mays, Toby Brinlee " << endl
          << "C.S.1428.501 "<< endl
          << "Lab Section: L01, L01"<< endl
          << "06/19/18"<< endl << endl;

     cout << "Geometry Calculator " << endl << endl

          << "1. Calculate the volume of a sphere " <<endl
          << "2. Calculate the volume of a pyramid with a square base " <<endl
          << "3. Calculate the volume of a cone " <<endl
          << "4. quit " <<endl << endl
          << "Enter your choice ( 1-" << MAX_CHOICE << " ): ";
     cin >> user_choice;

     if (user_choice <= 1 && user_choice >= MAX_CHOICE)
     {
         cout << " Invalid input.Only Numbers 1- " << MAX_CHOICE
              << " are Granted "<< endl
              << " Program will terminate. ";
     }
     else
     {

         switch ( user_choice )
         {
         case 1:
             cout << "Enter the radius of the sphere ? ";
             cin >> radius;

             if ( radius < 0 )
                    cout << endl << endl
                         << " Invalid input, " << radius
                         << " must be greater than zero.  Terminating program."
                         << endl << endl;
            else
            {
                volume = (4/3) * PI * pow(radius,3);

                cout << "The Radius of the sphere is "<< ""<< radius << " "
                     << "and the calculated volume is "
                     << fixed << setprecision(2) << volume ;
            }
         break;

        case 2:
            cout << " Enter the base length of the pyramid ? ";
            cin >> base_length;

            if ( base_length < 0 )
                cout << endl << endl
                     << " Invalid input, " << base_length
                     << " must be greater than zero.  Terminating program."
                     << endl << endl;
            else
            {
                cout << " Enter the base height of the pyramid ? ";
                cin >> height;

                if ( height < 0 )
                    cout << endl << endl
                         << " Invalid input, " << height
                         << " must be greater than zero.  Terminating program."
                         << endl << endl;
                else
                {

                    volume = (pow(base_length,2) * height)/3;

                    cout << "The base length is " << ""<< base_length << " "
                         << "and the height is "
                         << height << "as well as the volume is "
                         << fixed << setprecision(2)
                         << volume << " of the pyramid";
                }
            break;

        case 3:
           cout << "Enter the radius of the cone's base (in inches) :";
           cin >> radius;

           if (radius < 0)
           {
                    cout << endl << endl
                         << " Invalid input, " << radius
                         << " must be greater than zero.  Terminating program."
                         << endl << endl;

           }
           else
           {
               cout << "Enter the height of the cone (in inches) :";
               cin >> height;

               if(height < 0)
               {
                    cout << endl << endl
                         << " Invalid input, " << height
                         << " must be greater than zero.  Terminating program."
                         << endl << endl;
               }
               else
               {

                  volume = ( PI * pow(radius,2) * height)/3;

                  cout << "The volume of a cone with a radius of "
                       << radius  << ""
                       << " inch(es) "<< endl
                       << "and a height of " << height
                       << " inch(es) is " << fixed
                       << setprecision(2)<<volume
                       << " cubic inches. ";
               }
           }

         break;

        default:
             cout << " Invalid input.Only Numbers 1- " << MAX_CHOICE
                  << " are Granted "<< endl
                  << " Program will terminate. ";

               }
         }
     }

         system("PAUSE>NUL");

         return 0;

     }





