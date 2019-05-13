#include "studentRecords.h"

#include<iostream>
#include<string>

void studentRecords::add(int id, string name, int testscores[]){


    students[count].ID = id;
    students[count].name = name;

    for(int i = 0; i < 10; i++){
         students[count].scores[i] = testscores[i];
    }

    students[count].average = 0;

    count++;
}

float studentRecords::average(){
    for(int i =0; i < count; i++){
        int total = 0;
        for(int j = 0; j < 10; j++){
            total += students[i].scores[j];
        }
        students[i].average = total / 10;
    }
}

void studentRecords::display(){

    for(int i = 0; i < count; i++){

        cout << students[i].ID << " " << students[i].name << " ";
        for(int j = 0; j < 10; j++){
         cout << students[i].scores[j] << " ";
        }
        cout << students[i].average;
        cout << endl;
    }

}
