
/* NAME: <Deverell Mays!>  */

#include <iostream>

using namespace std;

// Function Prototypes:
int getArea(int, int);
int getPerimeter(int, int);
void printPicture(int, int, char);
bool isValidSideLength(int);

int main()
{
    int width,
        height,
        perim,
        side,
        area;
    char symbol,
         cont;

    do{
        cout << "Please enter the following" << endl;
        cout << "Width: ";
        cin >> width;

        while(!isValidSideLength(width)) // Function Call
        {
            cout << "ERROR: Sides must be between 1 and 10." << endl
                 << "Enter the width: ";
            cin >> width;
        }

        cout << "Height: ";
        cin >> height;

        while(!isValidSideLength(height)) // Function Call
        {
            cout << "ERROR: Sides must be between 1 and 10." << endl
                 << "Enter the height: ";
            cin >> height;
        }

        cout << "Desired symbol for picture: ";
        cin >> symbol;

        perim = getPerimeter(width, height); // Function Call
        area = getArea(width, height); // Function Call
        cout << "\nPerimeter: " << perim << endl
             << "Area: " << area << endl
             << "Picture of your rectangle: " << endl;
        printPicture(width, height, symbol); // Function Call

        cout << "\nWould you like to print another picture? (Y or N): ";
        cin >> cont;

    }while(cont == 'Y' || cont == 'y');



    return 0;
}

// TODO: Add function definitions here

int getArea(int height, int width)
{
return width * height;
}

int getPerimeter (int height, int width)
{
        return (2 * width + 2 * height );
}

bool isValidSideLength(int side)
{
   if (side >= 1 && side <= 10)
        return true;
   else
    return false;
}

void printPicture(int height, int width, char symbol)
   {
    for (int i = 1 ; i <= width ; i++)
    {
        for (int j = 1 ; j <= height; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }

   }
