// PreLab 2 Assignment
//dcm102
//deverell mays
//copy and paste into the IDE

// Write a program that copies the data in the
// prelab input file to an output file "flux_capacitor"
// so that it is formatted the same in both files.
//
// Additionally add 30 to the year when you rewrite
// it to the output file to help Marty Mcfly get back to
// his proper time.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// declaring variables
	string firstName;
	string lastName;
	int year;

	// declare input file stream variable and open file
	ifstream fin;
	fin.open("prelab_input.txt");

	// Test to see if file correctly opened. If statements will
	// be learned in the future. For now, don't worry about
	// understanding this.
	if (!fin)
        {
		cout << "ERROR - File failed to open. make sure that "
		     << "the input file and this file are in the"
		     << "same directory" << endl;
                return -1; // Return statement will terminate the program. We do not want
                               // to continue if we do not have a valid input file.
         }

	// declare output file stream varaible and open file
	ofstream fout;
	fout.open("flux_capacitor.txt");


	// ADD HERE write your code here

    fin >> firstName >> lastName >> year;
	year += 30;
	fout << firstName << " " << lastName << " " << year;




	// closing files
	fin.close();
	fout.close();

	return 0;
}

