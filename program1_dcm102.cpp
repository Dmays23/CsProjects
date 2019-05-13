/*
Author : Deverell Mays
C.S.2308
Date 09/08/18
*/

#include <iostream>

using namespace std;


void display(int[],string[],string[],int);
void bubble_Sort(int[],string[],string[],int);
int sequential_Search(int[],int,int);
int binary_Search(int[],int,int);



// This Function represents the display the students

void display(int student_id[], string stud_name[], string stud_email[],
             int num_students)
{
    for(int i = 0; i < num_students; i++)
    {
        cout << endl << "ID : " << student_id[i] << endl << "Name : "
             << stud_name[i] << endl << "Email : " << stud_email[i]
             << endl;
    }
}

// This Function is to sort the students using bubble sort

void bubble_Sort(int student_id[], string stud_name[],
                string stud_email[], int num_of_students)
{

    for(int i = 0; i < num_of_students - 1; i++)
    {
        for(int x = 0; x < num_of_students - 1 - i; x++)
        {
            if(student_id[x] > student_id[x + 1])
            {
                int temporary_id = student_id[x];
                student_id[x] = student_id[x + 1];
                student_id[x + 1] = temporary_id;
                string temporary_name = stud_name[x];
                stud_name[x] = stud_name[x + 1];
                stud_name[x + 1] = temporary_name;
                string temporary_email = stud_email[x];
                stud_email[x] = stud_email[x + 1];
                stud_email[x + 1] = temporary_email;
            }
        }
    }
}

// This Function represents the search for a student using sequential search

int sequential_Search(int student_id[], int search_id, int num_students)
{
    for(int i = 0; i < num_students; i++)
    {
        if(student_id[i] == search_id)
            return i;
    }
    return -1;
}

// This Function represents the search for a student using binary search

int binary_Search(int student_id[],int search_id,int num_students)
{
    int low, high, mid;

    low = 0;
    high = num_students - 1;

    while(low<=high)
    {
        mid = (low+high)/2;

        if(student_id[mid] == search_id)
            return mid;
        else if(student_id[mid] > search_id)
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}



int main( )
{
    const int num_students = 12;

    int student_id[num_students], search_id;

    string stud_name[num_students], stud_email[num_students];

    cout << "Enter Student Records for " << num_students
         << " Students." << endl;

    for (int i = 0; i < num_students; i++)
    {
        cout << endl << "Enter id: ";
        cin >> student_id[i];

        cout << endl << "Enter name: ";
        cin >> stud_name[i];

        cout << endl << "Enter email: ";
        cin >> stud_email[i];
    }

    cout << endl << "Unsorted Student Records: " << endl;

    display(student_id, stud_name, stud_email, num_students);

    bubble_Sort(student_id, stud_name, stud_email, num_students);

    cout << endl << " Sorted Student Records : " << endl;

    display(student_id, stud_name, stud_email, num_students);

    cout << endl << " Search ID using sequential search " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << endl << " Enter the ID you wish to search : ";
        cin >> search_id;

        int index = sequential_Search(student_id, search_id,num_students);

        if(index != -1)
            cout << endl << " Student found " << endl << " ID : "
                 << student_id[index] << endl << " Name : " << endl
                 << stud_name[i] << endl << " Email : " << endl
                 << stud_email[index];
        else
            cout << endl << " Student ID not found ";
    }

    cout << endl << " Search ID using binary search " << endl;

    for (int i = 0; i < 6; i++)
    {
        cout << endl << " Enter the ID you wish to search : ";
        cin >> search_id;

        int index = binary_Search(student_id, search_id, num_students);

        if(index != -1)
            cout << endl << " Student found " << endl << " ID : "
                 << student_id[index] << endl << " Name : " << endl
                 << stud_name[i] << endl << " Email : " << endl
                 << stud_email[index];
        else
            cout << endl << " Student ID not found ";
    }



    return 0;

}

