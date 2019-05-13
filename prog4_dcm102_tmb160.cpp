/*
   File: prog4_dcm102_tmb160.cpp

   Author: Deverell Mays, Toby Brinlee
   C.S.1428.501
   Lab Section: L01/L01
   Program: #4
   Due Date: 06/22/18

   This programs reads a salesperson's ID# (integer) and the amount of
   sales (real) from an input file. The input file contains a number of
   records. The first record contains an integer indicating the number of
   records (salesmen) to process. Each subsequent record contains a salesman's
   ID# and the monthly sales amount for that salesman. A count loop is used
   to read, process and report the data to an output file. After output is
   generated and written to the output file, an appropriate sentence is
   written to the screen letting the user know the name of the data file
   to which the sales report has been written.

   Note: An appropriate message is displayed to the screen if either the
   input file or the output file fails to open.

   Processing:
     The student's personal identifying information is written to a file.
     A report title and appropriate column headers are written to the file.
     The number of salesmen to process is read from an input file.
     As long as there are more salesmen to process,
          A salesman's record is read from the input file.
          Commission is calculated.
          Bonus is calculated.
          Total earnings are calculated.
          The salesman's ID & monthly sales figure are written to the file.
          If the salesman met the target sales goal,
                 a related comment is written to the file;
          otherwise,
                 blank spaces are written to the file.
          Commission, bonus, and earnings are written to the file.
     An appropriate message is written to the screen letting the user know
     the name of the data file to which the sales report has been written.


   Notes: Commission earned by each salesperson is based on a percentage
   of his/her sales that month. A bonus is paid those who exceed this
   month's sales target. The bonus is calculated at a percentage based on
   the amount by which the target sales are exceeded.

   Input (file - prog4_501inp.txt):
         number of salesmen (integer)
         salesman's ID (integer)    monthly sales figure (double)
         ...

   Constants: TARGET SALES AMOUNT = $30,000.00
              COMMISSION RATE = 10%
              BONUS RATE = 3%

   Output (screen):
          Author's Name
          C.S.1428.?       // '?' represents student's lecture section #
          Lab Section: L?     // '?' represents student's lab section #
          --/--/--         // dashes represent due date, month/day/year
             <blank line>
             <blank line>
          <Appropriate message indicating the name of the output file.>

   Output (file - prog4_501out.txt):

          Author's Name
          C.S.1428.?       // '?' represents student's lecture section #
          Lab Section: L?     // '?' represents student's lab section #
          --/--/--         // dashes represent due date, month/day/year
             <blank line>
             <blank line>
                              Monthly Sales Report
                                  <blank line>
          Sales ID#    Sales    Comments   Commission    Bonus    Earnings
          ----------------------------------------------------------------
           39808     35000.00   Met Goal     3500.00    150.00     3650.00
           45820     28000.00                2800.00      0.00     2800.00
            ...

   =================================================================

   Monetary output values are displayed to two decimal places.

   <Output will vary based on input values.>
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double TARGET_SALES_AMOUNT = 30000.00,
                 COMMISSION_RATE = 0.10,
                 BONUS_RATE = 0.03;

    int number_of_salesman,
        salesman_id;

    double monthly_sales_figure,
           commission,
           bonus,
           earnings;

    ifstream fin;
    fin.open("prog4_501inp.txt");

    if ( !fin )
    {
       cout << endl << endl
            << "***Program Terminated.***" << endl << endl
            << "Input file failed to open." << endl;

             system("PAUSE>NUL");

             return 1;
    }

    ofstream fout;
    fout.open("prog4_501out.txt");

    if ( !fout )
    {
        cout << endl << endl
            << "***Program Terminated.***" << endl << endl
            << "Output file failed to open." << endl;

             system("PAUSE>NUL");

             fin.close();

             return 2;
    }

    fout << "Deverell Mays, Toby Brinlee" << endl
         << "C.S.1428.501" << endl
         << "Lab Section: L01/L01" << endl
         << "06/22/18" << endl << endl << endl;

    fout << "                   Monthly Sales Report" << endl << endl
         << "Sales ID#   Sales   Comments   Commission   Bonus   Earnings"
         << endl
         << "____________________________________________________________"
         << endl;

    fin >> number_of_salesman;

    for (int i = 0; i < number_of_salesman; i++ )
    {
        fin >> salesman_id >> monthly_sales_figure;

        commission = monthly_sales_figure * COMMISSION_RATE;

        if (monthly_sales_figure > TARGET_SALES_AMOUNT)
            bonus = (monthly_sales_figure - TARGET_SALES_AMOUNT) * BONUS_RATE;
        else
            bonus = 0.00;

        earnings = commission + bonus;

        fout << fixed << setprecision(2) << salesman_id << setw(12)
             << monthly_sales_figure;

        if (monthly_sales_figure >= TARGET_SALES_AMOUNT)
            fout << "           " << " Met Goal ";
        else
            fout << "           " << "          ";

        fout << fixed << setprecision(2) << setw(10) << commission << setw(12)
             << bonus << setw(10) << earnings << endl;
    }

    cout << "Deverell Mays, Toby Brinlee" << endl
         << "C.S.1428.501" << endl
         << "Lab Section: L01/L01" << endl
         << "06/22/18" << endl << endl << endl;

    cout << "The sales report has be written to prog4_501out.txt";

    fin.close( );
    fout.close( );

    system("PAUSE>NUL");

    return 0;

}
