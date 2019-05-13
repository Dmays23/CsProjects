#ifndef STUDENTRECORDS_H_INCLUDED
#define STUDENTRECORDS_H_INCLUDED

#include<iostream>
#include<string>

using namespace std;

class studentRecords{

private:
        struct Student{
            int ID;
            string name;
            int scores[10];
            float average;
        };

        int count = 0;
        Student students[15];

public:
        void add(int, string, int []);
        float average();
        void display();
};

#endif // STUDENTRECORDS_H_INCLUDED
