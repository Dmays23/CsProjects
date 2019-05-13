/****************************************************
File Name:prog08__dcm102.cpp

Lab Section Number:L.14
Lab Section Instructor:Cruz, Jessica

Author: Deverell Mays
Date: 4/25/17
Problem Number: 8
CS 1428 spring 2017
Lecture Instructor: Priebe



This program will figure out how far it is from your home city to the last city in the list by moving from city
 to city in the list and calculating the total distance.Then calculates function to improve the ability to visit each city once.
*****************************************************/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

struct city
{
    double x_Coord;
    double y_Coord;
    string name;

};
bool getData(string inFile, city cities[], int &num_Cities);

void PrintRoute(city cities[], int num_Cities );

double getDistance(city city_num1, city city_num2);

double totalDistance(city cities[], int num_Cities);

void ImproveRoute(city cities[], int num_Cities);

void ChangeCity(city &Cc1, city &Cc2);

int main()
{

   string fileName = "Route_data.txt";

   const int MAX_CITIES = 100;
   city cities[MAX_CITIES];
   int num_Cities = 0;

   getData(fileName, cities, num_Cities);
   cout << " Route" << endl;

   PrintRoute(cities, num_Cities);

   double distance_city1 =
   totalDistance(cities, num_Cities);
   cout << "Total Distance : " << distance_city1<< endl;

   ImproveRoute(cities, num_Cities);
   cout << "New Route : " << endl;
   PrintRoute(cities, num_Cities);

   double distance_city2 =
   totalDistance(cities, num_Cities);
   cout << "New Total Distance : " << distance_city2<< endl;

   double difference =distance_city1 - distance_city2;

   double percent = (difference/(distance_city1+distance_city2))*100;
   cout << "New Improved : "<< percent << "%" << endl;

}

bool getData(string inputFile, city cities[], int &num_Cities)
{
    ifstream inFile;
    inFile.open(inputFile.c_str());

    string name;

    if (!inFile)
       {
           return false;
       }
      else
    {
       while(inFile >> name)
       {
        cities[num_Cities].name = name;
        inFile >> cities[num_Cities].x_Coord;
        inFile >> cities[num_Cities].y_Coord;
        num_Cities++;
       }

       return true;
    }
}
double getDistance(city distance_city1, city distance_city2)
{
    double x1 = distance_city1.x_Coord;
     double x2 = distance_city2.x_Coord;
      double y1 = distance_city1.y_Coord;
       double y2 = distance_city2.y_Coord;

     double x = pow((x2 - x1), 2);
     double y = pow((y2 - y1), 2);

    double distance = sqrt(x + y);
    return distance;
}

double totalDistance(city cities[],int num_Cities)
{
    double total = 0;

    for(int i = 0; i < (num_Cities-1); i++)
    {
       total = total+(getDistance(cities[i],cities[i+1]));
    }

    return total;
}
void PrintRoute(city cities[], int num_Cities)
{
    for(int i = 0; i < num_Cities; i++)
    {
       cout << cities[i].name << " " << endl;
    }
}
void ImproveRoute(city cities[],int num_Cities)
{
    for(int i = 0; i<num_Cities; i++)
    {
       int closest = (i+1);

       double distance = getDistance(cities[i],cities[closest]);

       for(int j = (i+2); j<num_Cities; j++)
       {
          if(getDistance(cities[i],cities[j])<distance)
          {
             closest = j;
             distance = getDistance(cities[i],cities[closest]);
          }
       }

       ChangeCity(cities[i+1],cities[closest]);
    }
}
void ChangeCity(city &Cc1,city &Cc2)
{
    city temp = Cc1;
    Cc1 = Cc2;
    Cc2 = temp;
}

