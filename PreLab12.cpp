#include <iostream>
#include <fstream>


using namespace std;

struct Dog
{
    string name;
    string breed;
    char sex;
    int age;
};

int main()
{
    Dog Dog1;
    Dog1.name = "Sparky";
    Dog1.sex = 'M';
    Dog1.breed = "Collie";
    Dog1.age = 5;

    Dog dog2;
      // TODO - Create a Dog object named "dog2".



    cout << " Enter the Dogs name, age, sex, and breed" << endl;


    cin >> dog2.name >> dog2.age >> dog2.sex >> dog2.breed;


     cout << "name : " << " " << dog2.name << " :"<< "age :" << " " << dog2.age << ":" << "sex : " << " " <<dog2.sex << " :"<< "breed :" << dog2.breed <<endl;

     cout << "name :" << " " << Dog1.name << " :"<< "age :" << " "<< Dog1.age << " :" << "sex :" << " " << Dog1.sex << " :" << "breed :" << Dog1.breed <<endl;


    return 0;
}
