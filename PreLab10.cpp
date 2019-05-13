// Add the following functions:

// 1. 'getRadius' asks the user to enter the radius of a circle
//     and returns the given value. (should return a double)`

// 2. 'calcArea' takes the radius and returns the area of a circle.

// 3. 'printResults' void type function that should print the results to
//    console.

// Your function needs to have a local variable called 'PI' which holds the
// value '3.14159'.

// The function call is provided, you just need to implement the
// function prototype and function definition.

 #include <iostream>
using namespace std;

double getRadius(double, double);
double calcArea(double , double, double);
void printResults(double);


int main()
{
    double radius,
           area;
    double PI = 3.14159;

    radius = getRadius(radius, PI);


    // TODO - call 'getRadius' function and assign the
	//        returned value to radius
    area = calcArea(radius, area, PI);

	// TODO - move the following cout to the 'printResults' function
	//        and call that function here instead.

       printResults(area);
    return 0;
}

// 1. 'getRadius' asks the user to enter the radius of a circle
//     and returns the given value. (should return a double)

double getRadius(double radius ,double PI)
{
    cout << " Please enter the radius of a circle";
    cin >> radius;
    return radius;
}

double calcArea(double radius, double area, double PI)
{
      area = PI*radius * radius;
      return area;
}

void printResults( double area)
{

    cout << "The area of your circle is " << area << " units squared."
             << endl;
}

