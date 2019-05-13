/* NAME: <Deverell Mays!>  */

#include <iostream>
#include <iomanip> // library for setw() and other i/o manipulators
#include <fstream> // library for file input and output
using namespace std;

int main() {

    string name;
    int companyId, month1, month2, month3;
    double average;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    fin.open("sales_data.txt");

    // TODO: Declare output file stream variable and open the output file:
    ofstream fout;
    fout.open ("averages.txt");


    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }

    // Write the column headers to the output file:
    fout << left;
    fout << setw(10) << "CID" << setw(13) << "Car" << "Average" << endl;

    // TODO: Read data from input file, perform calculation,
    //    and write data to output file (x3):

    fin >> companyId >> name >> month1 >> month2 >> month3;
    average = (month1+month2+month3)/3.0;
    fout << name << " " << companyId << " " << average << endl;

    fin >> companyId >> name >> month1 >> month2 >> month3;
    average = (month1+month2+month3)/3.0;
    fout << name << " " << companyId << " " << average << endl;

    fin >> companyId >> name >> month1 >> month2 >> month3;
    average = (month1+month2+month3)/3.0;
    fout << name << " " << companyId << " " << average << endl;

    cout << "Data written to averages.txt" << endl;

    // Close the input and output files:
    fout.close();
    fin.close();

    // Exit the program:
    return 0;
}
