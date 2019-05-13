/****************************************************
File Name:prog07__dcm102.cpp

Author: Deverell Mays

Lecture Section: TTH 12:30-1:50
Lab Instructor: Cruz, Jessica
Lab Section: L14

Date: 4/10/17
Problem Number: 7
CS 1428 Spring 2017
Instructor: Priebe



This Program Shall grade a number of exams and print grade report for students in class.
*****************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;



int getData(string , string );
int report_card( int [], int, int );
int cal_low (int [], int );
int cal_High (int [], int);
double calcAverage(int [], int );

int main()
{

   int grades[11];
   int scoreCount= 0;
   int devlin;
   int i = 1;



   ifstream inFile;
   inFile.open("grade_data.txt");

   ofstream outFile;
   outFile.open("grade_report.txt");

   string key;
   string answer;

   inFile >> key;

    while (inFile >> answer)
    {
       devlin =  getData(  key, answer );
       grades[scoreCount] = devlin;
       scoreCount++;

    }
outFile <<endl;

    for ( int i =0; i<scoreCount; i++)
    {
             outFile << "Student "<< i+1 << " - " << grades[i] << endl;
    }
    outFile << endl;
    outFile << "Final Report" << endl;
    outFile << "------------" << endl;
    outFile << endl;


    for( int i = 10; i > 0; i--)
    {
        outFile << i << " - " << report_card( grades, scoreCount, i ) << endl;
    }

    outFile << endl;
    outFile << "lowest - " << cal_low( grades, scoreCount) << endl;
    outFile << "Highest -" << cal_High( grades, scoreCount) << endl;
    outFile << "Mean score - " << fixed << setprecision(3)<< calcAverage( grades, scoreCount)<< endl;
}


//this line will calculate the correct answers that were scored by each student.
int getData(string key, string answer)
{
   int CorrectAnswers = 0;

   for( int i =0; i < key.length(); i++)
   {
       if(key[i]==answer[i])
       {
           CorrectAnswers++;
       }

   }

   return CorrectAnswers;

}

//This function shall display what students made on the test overall.
int report_card( int grades[], int scoreCount, int i )
{
         int against = 0;

         for( int z = 0; z < scoreCount; z++)
         {
             if(grades[z] == i)
             {
                 against++;
             }
         }
         return against;
}

//This function shall return the lowest grade obtained.
int cal_low (int grades[], int scoreCount)
{
    int low = grades[0];
    for (int i = 0; i < scoreCount; i++)
    {
        if( low > grades[i])
        {
            low = grades[i];
        }
    }
    return low;
}
   //This Function shall return the highest grade made.

int cal_High (int grades[], int scoreCount)
{
    int High = grades[0];
    for (int i = 0; i < scoreCount; i++)
    {
        if( High < grades[i])
        {
            High = grades[i];
        }
    }
    return High;

}

//This Function shall calculate and return the Mean or the average score made.
double calcAverage(int grades[], int scoreCount)
{
   int total = 0;

   for (int i = 0; i < scoreCount; i++)
   {
      total = total + grades[i];
   }
double avg = static_cast<double> (total) / scoreCount;

   return avg;
}




