/*
Author : Deverell Mays
C.S.2308
project #5
*/


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void prod_Sales(int a[], float b[], int c[])
{
    double tot_Sales = 0;

    double tot_qs = 0;


        for(int i = 0; i < 10; i++)
        {
            double *sales = new double [9];
            sales[i] = b[i] * c[i];
            tot_Sales += sales[i];
            tot_qs += c[i];
            cout << setw(7) << a[i]<< setw(15) << b[i] << setw(15) << c[i]
            << setw(15) << sales[i] << endl;
        }

    cout << "The total Quantities Sold is :" << tot_qs << endl;
    cout << "The total sales is : $" << tot_Sales << endl;
}

int main()
{
    int id;
    double cost;
    int qs;

    ifstream fin;

    //ofstream fout;

    fin.open("dev23.txt");

    //fout.open("dev23.txt");


    int *prod_IDs;
    float *unit_Prices;
    int *quant_Sold;

        prod_IDs=new int[9];
        unit_Prices=new float[9];
        quant_Sold=new int[9];


    for(int i = 0; i < 10; i++)
    {
        fin >> id >> cost >> qs;
        prod_IDs [i] = id;
        unit_Prices [i] = cost;
        quant_Sold [i] = qs;
    }

    cout << " Production Id " << setw(15) << " Price " << setw(15)
    << " Q sold " << setw(15) << " Sales " << endl;

    prod_Sales(prod_IDs,unit_Prices,quant_Sold);

    fin.close();


    return 0;
}
