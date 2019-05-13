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
	// TODO - Create a Dog object named "dog1", and initialize its name to
	//        "Sparky", sex to 'M', age to 5, and breed to "Collie".
   Dog dog1;
   dog1.name = "sparky";
   dog1.breed= "Collie";
   dog1.sex='M';
   dog1.age=5;
        // TODO - Create a Dog object named "dog2".

  Dog dog2;
	// TODO - Prompt the user to enter the dog's name, age, sex, and breed,
	//        and assign them to the "dog2" object.
        //        Assume the dog name and breed are entered as a single word
        //        so that both will work with cin statements.
 cout << "Enter the Dog's name, age, sex, and breed ..."<<endl;
 cin>> dog2.name;
 cin>> dog2.age;
 cin>> dog2.sex;
 cin>> dog2.breed;
	// TODO - Print "dog1" and "dog2" objects to the console. E.g.
	//        "Name: Sparky, Sex: M, Age: 5, Breed: Collie"
cout<< "Name : "<<dog1.name<< " ";
cout<< "age : "<<dog1.age<< " ";
cout<< "sex : "<<dog1.sex<< " ";
cout<< "breed : "<<dog1.breed<< " ";
cout <<endl;

cout<< "Name : "<<dog2.name<< " ";
cout<< "age : "<<dog2.age<< " ";
cout<< "sex : "<<dog2.sex<< " ";
cout<< "breed : "<<dog2.breed<< " ";


    return 0;
}
