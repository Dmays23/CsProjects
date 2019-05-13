#include<iostream>
#include<fstream>
#include "studentRecords.h"

using namespace std;

int main(){

    studentRecords obj;

    ifstream fin;

    fin.open("inputs.txt");

    string name;
    int id;
    int scores[10];

    for(int i = 0; i < 10; i++){
        fin >> id >> name;

        for(int j =0; j < 10; j++){
            fin >> scores[j];
        }

        obj.add(id,name,scores);
    }

    obj.average();
    obj.display();

    fin.close();


    return 0;
}
