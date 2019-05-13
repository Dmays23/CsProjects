#include <iostream>
#include <fstream>

using namespace std;

struct Book
{
    string title;
    int pub_year;
    int num_pages;
    int num_copies;
};

int main()
{

    const int SIZE = 3;
    Book Book3[SIZE];
    int total = 0;
    int oldest = 0;
    int longest = 0;


    for(int i = 0; i < SIZE; i++)
    {
        cout << "Book Number # " << i+1 << endl;

        cout << "Enter title : ";
        cin >> Book3[i].title;

        cout << " Enter Publishing year : ";
        cin >> Book3[i].pub_year;

        cout << " Enter Number of Pages : ";
        cin >> Book3[i].num_pages;

        cout << "Enter Number of Copies : ";
        cin >> Book3[i].num_copies;

       total += Book3[i].num_copies;


    }

      cout << endl << endl;
      cout << " The Total Number of Books is : ";
      cout << total << endl;


    for (int i = 1; i < SIZE; i++)
    {
        if(Book3[i].pub_year < Book3[oldest].pub_year)
            oldest = i;
    }

    cout << "oldest book " << " : " << Book3[oldest].title << endl;



    for (int i = 1; i < SIZE; i++)
    {
        if(Book3[i].num_pages < Book3[longest].num_pages)
            longest = i;
    }

    cout << "Longest book " << " : " << Book3[longest].title << endl;

}
