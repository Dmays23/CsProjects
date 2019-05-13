/****************************************************
File Name:Project02__dcm102.cpp

Author: Deverell Mays

Lecture Section:  TTH 3:30-4:50
Lab Instructor:
Lab Section: L08

Date: 8/31/17
Problem Number: 2
CS 1428 Spring 2017
Instructor: Ali MOONIS

*****************************************************/


#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main ()
{
cout <<setprecision(2) <<fixed;
float Totalprice_book=0,Total_discount=0,Subtotal_discount=0,Sales_tax=0,Total_AMT;
//declaring input file stream and open file
ifstream fin;
fin.open ("project2_dcm102_BookStoreinfo.txt");

//Test to see if file correctly opened.
if (!fin)
    {
        cout << "ERROR - File failed to open. make sure that"
             << " the input file and this file are in the "
             << " same directory" << endl;
             return -1; //return statement will Terminate the program. We do not want
                        // to continue if we do not have valid input file.
    }
string adress;
getline(fin,adress);
fin.ignore();
cout << adress<< endl;

string receipt;
getline(fin, receipt);
fin.ignore();
cout << receipt << endl << endl;

string customer_name;
getline(fin, customer_name);
fin.ignore();
cout << customer_name << endl;

string customer_phoneNum;
getline(fin, customer_phoneNum);
fin.ignore();
cout << customer_phoneNum << endl;

string customer_adress;
getline(fin,customer_adress);
fin.ignore();
cout << customer_adress << endl << endl;

string book_num;
getline(fin,book_num);
fin.ignore();
cout << book_num << endl;

string Book_title;
getline(fin,Book_title);
fin.ignore();
cout << Book_title << endl;

string Book_author;
getline(fin,Book_author);
fin.ignore();
cout << Book_author << endl;

string aisle_num;
getline(fin,aisle_num);
fin.ignore();
cout << aisle_num<< endl;



float price_book;
fin>>price_book;
 //calculations
Totalprice_book+=price_book;
Subtotal_discount=Totalprice_book-Total_discount;
cout << price_book << endl;


float cost_discount=0;

Sales_tax=Subtotal_discount*0.08;
Total_AMT=Sales_tax+Subtotal_discount;
// total amount
if (price_book >= 90)
{
    cost_discount=price_book*0.05;
    cout << "Cost Discount:$" << cost_discount << endl << endl;
}
else
 cout << "Cost Discount:$" << 0 << endl << endl;
//declare output file stream variable and open file
ofstream fout;
fout.open ("project2_dcm102_BookStoreReturn.txt");
fout <<setprecision(2) <<fixed;

fout <<adress <<endl;
fout << receipt <<endl << endl;
fout << "Customer Name: " << customer_name << endl;
fout << "Customer Telephone Number: " << customer_phoneNum << endl;
fout << "Customer Address:" <<customer_adress << endl << endl;
fout << "Book Number: " << book_num << endl;
fout << "Book Title: " << Book_title << endl;
fout << "Book Author: " << Book_author << endl;
fout << "Aisle Number: " << aisle_num << endl;
fout << "Price of the Book: $" << price_book << endl;
fout << "Cost Discount: $"<< cost_discount << endl << endl;
//fout <<"Thank you for shopping at The University Book Store "<< endl;

//repeat the process to pull whole file
fin.ignore();
fin.ignore();
getline(fin,book_num);
fin.ignore();
cout <<book_num << endl;

Book_title;
getline(fin,Book_title);
fin.ignore();
cout << Book_title << endl;

 Book_author;
getline(fin,Book_author);
fin.ignore();
cout << Book_author << endl;


 aisle_num;
getline(fin,aisle_num);
fin.ignore();
cout << aisle_num<< endl;


fin>>price_book;
cout <<price_book << endl;
Totalprice_book+=price_book;


Subtotal_discount=Totalprice_book-Total_discount;
Sales_tax=Subtotal_discount*0.08;
Total_AMT=Sales_tax+Subtotal_discount;

if (price_book >= 90)
{
    cost_discount=price_book*0.05;
    cout << "Cost Discount:$" << cost_discount << endl;

}else
 cout << "Cost Discount:$" << 0 << endl << endl;

Total_discount+=cost_discount;
fout << "Book Number: " << book_num << endl;
fout << "Book Title: " << Book_title << endl;
fout << "Book Author: " << Book_author << endl;
fout << "Aisle Number: " << aisle_num << endl;
fout <<fixed << setprecision(2)<< "Price of the Book: $" << price_book << endl;
fout << "Cost Discount: $"<< cost_discount << endl << endl;
//ignore the lines to creatleft << setw(24)<<e space
fin.ignore();
fin.ignore();
 book_num;
getline(fin,book_num);
fin.ignore();
cout<< book_num << endl;

Book_title;
getline(fin,Book_title);
fin.ignore();
cout << Book_title << endl;

 Book_author;
getline(fin,Book_author);
fin.ignore();
cout << Book_author << endl;


 aisle_num;
fin>>aisle_num;
//fin.ignore();
cout << aisle_num<< endl;


fin >> price_book;
fin.ignore();
Totalprice_book+=price_book;

cout << price_book << endl;


//if the price_book is greater than or equal to 90 then multiply by 5% otherwise leave it be
if (price_book >= 90)
{
    cost_discount=price_book*0.05;
    cout << "Cost Discount:$" << cost_discount << endl << endl;

}else
 cout << "Cost Discount:$" << 0 << endl << endl;

string end_header;
fin.ignore();
getline(fin,end_header);
fin.ignore();
Total_discount+=cost_discount;
fout << left << setw(24)<< "Book Number:" << book_num << endl;
fout << left << setw(24)<<"Book Title:" << Book_title << endl;
fout << left << setw(24)<<"Book Author:" << Book_author << endl;
fout << left << setw(24)<<"Aisle Number:" << aisle_num << endl;
fout << left << setw(24)<<"Price of the Book:$" << price_book << endl;
fout << left << setw(24)<<"Cost Discount:$"<< cost_discount << endl << endl;
fout << left << setw(24)<<"Sub Total of Three Books:$"<< Totalprice_book<< endl;
fout << left << setw(24)<<"Total Discount:$"<<Total_discount<<endl;
fout << left << setw(24)<<"Subtotal after Discount:$"<<Subtotal_discount<< endl;
fout << left << setw(24)<<"Sales Tax Amount:$" << Sales_tax<< endl;
fout << left << setw(24)<<"Total Amount Paid:$"<<Total_AMT<<endl << endl;


cout << "Sub Total of Three Books: $"<< Totalprice_book<< endl;
cout << "Total Discount: $"<< Total_discount<<endl;
Subtotal_discount = Totalprice_book - Total_discount;
cout << "Subtotal after Discount: $"<<Subtotal_discount<< endl;
Sales_tax=Subtotal_discount*0.08;
cout << "Sales Tax Amount: $" << Sales_tax<< endl;
Total_AMT=Sales_tax+Subtotal_discount;
cout << "Total Amount Paid: $"<<Total_AMT<<endl <<endl;

cout << right << setw(24)<< end_header<< endl;
fout << right << setw(24)<< end_header<< endl;

}
