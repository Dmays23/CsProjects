#include <iostream>

using namespace std;


    float Circumference();
   int isgreaterthan(int a, int b);
    //double oweOverOneHundred(double [], const int );
    //void createDate(string &, int &);

    int main()
    {
          double Radius;
          int a;
          int b;
          string month;
          int num;
         double Circum;


       // double array1[] = 40.5, 200.75, 77;
       // double array2[] = 40.5, 200.75, 77 ,173.5 ,786;

        cout << "############ Function 1 ############" << endl << endl;

        Circum = Circumference();
        cout << "The Cicumference of the circle is : "<< Circum << endl << endl;



        cout << "############ Function 2 ############" << endl << endl;
         isgreaterthan (2,-18);
         isgreaterthan (-12,6);

        cout << "Hello World" << endl;

        return 0;
    }

float Circumference()
{
   int Radius;
   double Circum;
   const double PI = 3.14159;

   cout << "Enter Radius : ";
   cin >> Radius;

   Circum = 2 * PI * Radius;

   return Circum;
}

 int isgreaterthan(int a , int b)
 {
     char yes = 'Y';
     char no = 'N';

     bool answer = true||false;

     if (a > b)

        cout << a << " " << "isGreaterThan" << " " << b << " : " << " Y " << endl;
        return answer;

     if (b <= a )

        cout << b << " "<< "isGreaterThan " << " " << a <<" : " << " N " <<  endl;
      return false;


return answer;
 }



