/****************************************************
File Name:temps__dcm102.cpp

Author: Deverell Mays

Lecture Section: TTH 12:30-1:50
Lab Instructor: Cruz, Jessica
Lab Section: L14

Date: 4/10/17
Problem Number: 6
CS 1428 Spring 2017
Instructor: Priebe



This Program Shall
*****************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;



   void getData(double temps[], int& numtemps)

{


   ifstream inFile;
   inFile.open("summer_temps.txt");

   double temp;
   string month;
   inFile>>month;
   cout<<month<<endl;
   while (inFile >> temp)

   {
      temps[numtemps] = temp;
      numtemps++;
   }

}

int getHighestTemp(double temps [], int numtemps, double MAX_temp, int date)
{

   for (int i = 0; i < numtemps; i++)
   {
      if (temps[i] >= MAX_temp){
         MAX_temp = temps[i];
         date= i;
      }
   }
   cout << "Maximum temperature" << " : "<< setprecision(4) <<MAX_temp << " " ;

   return date;
}


void numDaysOver(double temp[], int numtemps, double threshold)
{
  int numDaysOver = 0;

   for (int i = 1; i < numtemps; i++)
   {
      if (temp[i] >= threshold)
         numDaysOver += 1;

   }


   cout <<  "Number of days over " << threshold <<" in July" << " : "<< numDaysOver << endl;
}

double calcAverage(double temps[], int numtemps)
{
   double total = 0;

   for (int i = 0; i < numtemps; i++)
   {
      total = total + temps[i];
   }

   double avg = total / numtemps;

   return avg;

}


int main()
{
   int MAX_Days = 31;
   double MAX_Temp = 0;
   double temps[MAX_Days];
   int date = 0;
   int numtemps = 0;
   int highest_Temp_Date = 0;
   double threshold = 100;

   //function to fill the array with the input file
   getData(temps, numtemps);

   for (int i = 0; i < numtemps; i++)
      cout << i+1 << " " << temps[i] << endl;

   //returns the index of the smallest element

   cout << "Average daily high temperature in July " << " : " << setprecision(3) << calcAverage( temps, numtemps) << endl;
   numDaysOver(temps, numtemps, threshold);
   highest_Temp_Date = getHighestTemp(temps,numtemps, MAX_Temp, date);
   cout << "(occurred on July " << highest_Temp_Date +1 << " )"<<endl;


   cout << "Hey!" << endl;

}




