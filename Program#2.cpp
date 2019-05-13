/*
Author : Deverell Mays
C.S.2308
project #2
*/



#include <iostream>
#include <vector>

using namespace std;

int lin_Search(vector<int>, int, int);

int bin_Search(vector<int>, int, int);


int main()
{
    const int array_Size = 13;

    vector<int>stud_IDs = {100, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113};

    vector<string> stud_Names = {"Dev", "Jerry", "Doug", "Lebron", "Chris", "Gary", "Miller", "Harold", "Von", "Randall", "Keenan", "Bella", "Carter"};

    vector<string> stud_Emails = {"dm06@txstate.edu", "jk12@txstate.edu", "dg45@txstate.edu", "lj23@txstate.edu",
    "cm09@txstate.edu", "gq12@txstate.edu", "mm23@txstate.edu", "ht34@txstate.edu", "vm67@txstate.edu", "ro89@txstate.edu",
    "kd78@txstate.edu", "bd56@txstate.edu", "cs34@txstate.edu"};

    cout << "\n";

    cout << "The unsorted student data : \n";

    for(int i = 0; i < array_Size; i++)
    {
        cout << stud_IDs[i] << "  " << stud_Names[i] << "  " << stud_Emails[i] << endl;
    }


    int userInput;
    for(int i = 0; i < 6; i++)
    {
        cout << "Please Enter student ID : " << endl;
        cin >> userInput;

        int result = lin_Search(stud_IDs, array_Size, userInput);
        if(result == -1)

        cout << "Number not found" << endl;
        else
        cout << "The number is found in index " << result << " in the array! (using linear search!)" << endl;
    }

    int input;
    for(int i = 0; i < 6; i++)
    {
        cout << "Please Enter student ID : " << endl;
        cin >> input;
        int result = bin_Search(stud_IDs, array_Size, input);

        if(result == -1)

        cout << "Number not found" << endl;
        else

        cout << "The number is found in index " << result << " in the array! (using binary search!)" << endl;
    }


    return 0;
}


int lin_Search(vector <int> arr, int size, int searchValue)
{
    int i;


    for (i = 0; i < size; i++)
    {
        if (arr[i] == searchValue)
         return i;
    }
    return -1;
}

int bin_Search(vector <int> arr, int num_Elem, int value)
{
    int first = 0;
    int last;
    last = num_Elem-1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last)
{
    middle = (first + last) / 2;
    if (array[middle] == value)
    {
    found = true;
    position = middle;
    }
    else if (array[middle] > value)
    {last = middle - 1;}
    else
    {first = middle + 1;}
}
    return position;
}
