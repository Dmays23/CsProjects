/****************************************************
File Name:prog04__dcm102.cpp

Author: Deverell Mays

Lecture Section: TTH 12:30-2:00
Lab Instructor: Cruz, Jessica
Lab Section: L14

Date: 2/19/17
Problem Number: 4
CS 1428 Spring 2017
Instructor: Priebe

This Program will be calculating the averages for the exam grades and a Final Grade of A, C, or F.
A or C is Passing and F is Failing. Also i will be creating an website in an (HTML) OUTPUT file.
*****************************************************/

#include <iostream>
#include <fstream>
//Devs Project
using namespace std;

/****************
function - printWebStart

parameters - the output file stream, the title of the web page
returns - nothing

prints the HTML for the beginning of a web page to the output file
****************/

void printWebStart(ofstream &oFile, string pageTitle)
{
   oFile << "<html>" << endl;
   oFile << "<head>" << endl;

   oFile << "<title>" << pageTitle << "</title>" << endl;

   oFile << "</head>" << endl;
   oFile << "<body>" << endl;

}

/****************
function - printWebEnd

parameters - the output file stream
returns - nothing

prints the HTML for the end of a web page to the output file
****************/

void printWebEnd(ofstream &oFile)
{
    oFile << "</body>" << endl;
    oFile << "</html>" << endl;
}

/****************
function - calcAverage

parameters - the total of the exams (int), the number of exams (int)
returns - the average of the exams (double)

Returns the average of the exam scores when passed in the total and the number of exams
****************/

double calcAverage(int total, int numExams)
{
    double average;
    average = static_cast<double> (total) / numExams;
    return average;
}

/****************
function - processData

parameters - the output file stream
returns - nothing

Reads in the data and prints the report in HTML to the output file
****************/
void processData(ofstream &oFile)
{
    ifstream inFile;
    inFile.open("score_info.txt");

    string firstName;
    string lastName;
    int num_exams;
    int firstExam;
    int secondExam;
    int thirdExam;
    double Average;

    inFile >> firstName >> lastName >> num_exams >> firstExam >> secondExam >>thirdExam;

    int total = firstExam + secondExam + thirdExam;
    Average = calcAverage(total,num_exams);

cout << firstName << endl;
oFile << "<b> Grade Report for </b>" <<"<br>" <<"<br>" << endl;
oFile << firstName << " " << lastName <<"<br>" << endl;
oFile<<"<br>" <<endl;
oFile << "Exam 1-" <<firstExam <<"<br>" <<endl;
oFile << "Exam 2-" <<secondExam<<"<br>" <<endl;
oFile << "Exam 3-" <<thirdExam <<"<br>"<<"<br>" <<endl;

Average = calcAverage(total,num_exams);
oFile <<"Average -" <<fixed <<Average <<"<br>" <<endl;

if (Average >= 89.5)
{
    oFile << " Grade - A" << endl;
    oFile << "<p>" << endl;
    oFile << " Sam Jones - " << "passed" << "</br>" << endl;
}
else if (Average >= 79.5 && Average < 89.5)
{
      oFile << " Grade - B" << endl;
    oFile << "<p>" << endl;
    oFile << " Sam Jones - "  << "passed" << "</br>" << endl;
}
else if (Average >= 69.5 && Average < 79.5)
{
      oFile << " Grade - C" << endl;
    oFile << "<p>" << endl;
    oFile << " Sam Jones - " << "passed" << "</br>" << endl;
}
else
{
    oFile << " Sam Jones - " << "<br>" << "Failing" << "</br>" << endl;
}


cout << " Processing the code !! " << endl;

}

/**************************************************************************************/

int main()
{
    cout << "processing..." << endl;

    ofstream outFile;
    outFile.open("prog04_output_rp44.html");

    printWebStart(outFile, "Foo Foo");

    processData(outFile);

    printWebEnd(outFile);

    outFile.close();

//take this line out after you get the program to run
cout << "All done!" << endl;

    return 0;
}
