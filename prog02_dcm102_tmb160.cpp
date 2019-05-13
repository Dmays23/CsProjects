/*
   File: prog02_dcm102_tmb160.cpp

   Author: Deverell Mays, Toby Brinlee
   C.S.1428.501
   Lab Section: L01, L01
   Program: #2
   Due Date: 06/14/2018

   This program reads the length of one side of a cube (in inches) and
   the dimensions of a rectangular prism (in inches) from an input file,
   prog2_501inp.txt. The program then calculates the surface area of the
   cube and the surface area of the rectangular prism. The dimensions
   of the cube and the dimensions of the rectangular prism along with
   the calculated surface areas are then written to an output file,
   prog2_501out.txt, with content and layout shown below. Numeric output
   is formatted to two decimal places. After output is generated and written
   to the output file, an appropriate sentence is written to the screen
   letting the user know the name of the data file to which the surface
   area report has been written.

   An appropriate message is displayed to the screen if there is a problem
   opening either the input file or the output file.

   Input (file - prog2_501inp.txt):  side, length, width, height (doubles)
   Constants: none
   Output (Sample Console Screen):

           Author's Name
           C.S.1428.?          // '?' represents author's lecture section #
           Lab Section: L?     // '?' represents student's lab section #
           --/--/--            // dashes represent due date, month/day/year
              <blank line>
              <blank line>
           <Appropriate message indicating the name of the output file.>

   Output (file - prog2_501out.txt):

           Author's Name
           C.S.1428.?          // '?' represents author's lecture section #
           Lab Section: L?     // '?' represents student's lab section #
           --/--/--            // dashes represent due date, month/day/year
              <blank line>
              <blank line>
           The surface area of a cube with sides of length ? is ? .
           The surface area of a ? by ? by ? rectangular prism is ? .

    =================================================================

   <Output will vary based on input values.>

*/

#include <iostream>
#include <fstream>
using namespace std;

int main( )
{

    double side,
           length,
           width,
           height,
           surface_area_of_rectangular_prism,
           surface_area_of_cube;

    ifstream fin;
    fin.open("prog02_501inp.txt");

    if ( !fin )
   {
        cout << endl << endl
             << "***Program Terminated.***" << endl << endl
             << "Input file failed to open." << endl;

        return 1;
   }

    ofstream fout;
   fout.open("prog02_501out.txt");


   if ( !fout )
   {
        cout << endl << endl
             << " ***Program Terminated.*** " << endl << endl
             << "Output file failed to open." << endl;

        fin.close();

        return 2;
   }


    surface_area_of_cube = 6*(side*side);

    surface_area_of_rectangular_prism = 2* (length*width) +  2* (width*height) +  2* (length*height);

    cout << endl << endl;

    fout << "Deverell Mays, Toby Brinlee " << endl
         << "C.S.1428.501 "<< endl
         << "Lab Section: L01, L01"<< endl
         << "06/14/18"<< endl << endl;

    cout << endl << endl;

    fout << "The Surface area of a cube with sides of length ?.?? is ???.??"<<endl;
    fout << "The surface area of a ?.?? by ?.?? by ?.?? rectangular prism is ??.?? " << endl;

    cout << "Deverell Mays, Toby Brinlee " << endl
         << "C.S.1428.501 "<< endl
         << "Lab Section: L01, L01"<< endl
         << "06/14/18"<< endl << endl;

    cout << " The surface area report has been written to prog02_501out.txt"<<endl;









}
