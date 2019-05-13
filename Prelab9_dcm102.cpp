
// Add the following functions:

//Deverell Mays

// 1. 'getRadius' asks the user to enter the radius of a circle
//     and returns the given value. (should return a double)

// 2. 'calcArea' takes the radius and returns the area of a circle.

// 3. 'printResults' void type function that should print the results to
//    console.

// Your function needs to have a local variable called 'PI' which holds the
// value '3.14159'.

// The function call is provided, you just need to implement the
// function prototype and function definition.

#include <iostream>
using namespace std;

// TODO - write the prototypes here
double calcArea(double &radius, const double PI, double &area);
double getRadius(double &Radius);
void PrintResults (double &area);

int main()
{
    double radius,
           area;

    const double PI = 3.14159;

    // TODO - call 'getRadius' function and assign the
    //        returned value to radius.
    radius = getRadius(radius);
    area = calcArea (radius, PI, area);


    PrintResults (area);

    // TODO - move the following cout to the 'printResults' function
    //        and call that function here instead.


    return 0;
}

// TODO - write the functions here
double calcArea(double &radius, const double PI, double &area)
{

    area = PI * (radius * radius);

    return area;

}
void PrintResults(double &area)
{
    cout << " The area of your circle is " << area << " Units squared ."
         << endl;
}

double getRadius(double &radius)
{

    cout << "Please Enter the radius of a circle : " ;
        cin >> radius;

}
