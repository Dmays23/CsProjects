/*
   File: prog6_dcm102_tmb160.cpp

   Author: Deverell Mays, Toby Brinlee
   C.S.1428.501
   Lab Section: L01, L01
   Program: #6
   Due Date:07/02/18

   This program reads integer data from an input file filling a
   2-dimensional array (4 rows, 5 columns). It then reports statistics
   about the data in the array.

   Functions are used to read, process and report the data to an output
   file. Each function is individually and appropriately documented. After
   all data are processed, a function is called to write an appropriate
   sentence to the screen letting the user know the name of the data file
   to which the array statistics have been written.

   Note: An appropriate message is displayed to the screen if either the
   input file or the output file fails to open.

   Processing:

   * A void function printIdInfo is called to print the authors' personal
     information (names, class/section number, lab section number, due date)
     on the first, second, third and fourth lines of output. printIdInfo prints
     two blank lines after the due date. The output is directed to a file or
     to the screen depending on the call.
        e.g  Authors' Names
             C.S.1428.?         // '?' represents three digit lecture section #
             Lab Section: L?    // '?' represents two digit lab section #
             --/--/--           // dashes represent due date, month/day/year
     		 	   <blank line>
     		 	   <blank line>
   * A void function fillArray is called to fill the array with integer
     data from an input file.
   * A typed function getTotal is called. It accepts a 2-D array as its
     argument and returns the integer total of all values stored in the
     array.
   * A typed function getAverage is called. It accepts the integer total
     of all elements (from getTotal) and returns the real average of all
     the elements stored in the array.
   * A typed function getRowTotal is called. It accepts a 2-D array as its
     first argument and an integer as its second argument (a specific row
     in the array) and returns the total of the values in the row specified.
     The user provides the actual row number for which the total is desired.
     The function, getRowTotal, adjusts that number to allow for array
     indices being offset by one in C++.
        e.g. If the user wants the total of the first row (which
             corresponds to array index 0), they provide a 1 as the
             second argument when they call the function getRowTotal.
   * A typed function getColumnTotal is called. It accepts a 2-D array as
     its first argument and an integer as its second argument (the specific
     column in the array) and returns the total of the values in the column
     specified. The user provides the actual column number for which the
     total is desired. The function, getColumnTotal, adjusts that number
     to allow for array indices being offset by one in C++.
        e.g. If the user wants the total of the first column (which
             corresponds to array index 0), they provide a 1 as the
             second argument when they call the function getColumnTotal.
   * A typed function getHighestInRow is called. It accepts a 2-D array as
     its first argument and an integer as its second argument (a specific
     row in the array) and returns the highest value in the row specified.
     The user provides the actual row number in which the highest value is
     to be located. The function, getHighestInRow, adjusts that number
     to allow for array indices being offset by one in C++.
        e.g. If the user wants the highest value in the first row (which
             corresponds to array index 0), they provide a 1 as the second
             argument when they call the function getHighestInRow.
   * A typed function getLowestInRow is called. It accepts a 2-D array as
     its first argument and an integer as its second argument (a specific
     row in the array) and returns the lowest value in the row specified.
     The user provides the actual row number in which the lowest value is
     to be located. The function, getLowestInRow, adjusts that number to
     allow for array indices being offset by one in C++.
        e.g. If the user wants the lowest value in the first row (which
             corresponds to array index 0), they provide a 1 as the
             second argument when they call the function getLowestInRow.
   * A void function printResults is called to print to an output file the
     total of all array elements; the average of all array elements; the
     row of which the calling routine requested the total and the total of
     the elements in that row; the column of which the calling routine
     requested the total and the total of the elements in that column; the
     row of which the calling routine requested the highest value and the
     highest value in that row; and the row of which the calling routine
     requested the lowest value and the lowest value in that row. Results
     are written in sentence form.
   * printIdInfo is called a second time with output directed to the screen.
   * A void function printFileNotification is called to print a statement
     to the screen letting the user know the name of the data file to which
     the array statistics have been written. The output file name is provided
     by the calling routine.(Refer to sample output below.)

   The following named constants are declared globally: ROWS & COLS - the
   number of rows & columns in the 2-D array being processed

   Locally declared named constants include:
      - a string to hold the authors' names
      - a string to hold the project's due date
      - an integer to hold the section number
      - an integer representing the maximum string length allowed for
        input and output file names which are stored in character arrays
        of that length

==========================================================================

   Input (file - prog6_?inp.txt): 4 rows, 5 columns (integers)

==========================================================================

   Layout and content of the output are shown in the samples below.

   Output (screen):
           Authors' Names
           C.S.1428.?         // '?' represents current lecture section #
           Lab Section: L?    // '?' represents two digit lab section #
           --/--/--           // dashes represent due date, month/day/year
             <blank line>
             <blank line>
           <Appropriate message indicating the name of the output file.>

   Output (file - prog6_?out.txt):

           Authors' Names
           C.S.1428.?         // '?' represents current lecture section #
           Lab Section: L?    // '?' represents two digit lab section #
           --/--/--           // dashes represent due date, month/day/year
             <blank line>
             <blank line>
           Sentence stating the total of all elements in the array.
           Sentence stating the average of all elements in the array.
           Sentence stating the total of the elements in row specified.
           Sentence stating the total of the elements in column specified.
           Sentence stating the highest value in row specified.
           Sentence stating the lowest value in row specified.

   =======================================================================

   <Output will vary based on input values.>

   =======================================================================
*/

#include <iostream>


using namespace std;


int main ()
{








}
