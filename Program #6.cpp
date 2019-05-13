/*
Author : Deverell Mays
C.S.2308
project #6
*/

  #include <iostream>
  #include <iomanip>

   using namespace std;

   struct Sales
   {
       int prod_ID;
       double u_Price;
       int quan_Sold;
       double prod_Sales;
   };

   void input(struct Sales s[], int n)
   {

      double tot_UnitsSold = 0;
      double tot_Sales = 0;

      cout << " Enter " << n << " Product Information " << "\n";

       for(int i = 0; i < n; i++)
       {
          cout << " Product " << i+1 << "\n";

           cout << "Enter Product ID :" << " ";
          cin >> s[i].prod_ID;

          cout << "Enter Unit Price :" << " ";
          cin >> s[i].u_Price;

          cout << "Enter Quantities Sold :" << " ";
          cin >> s[i].quan_Sold;

          s[i].prod_Sales = s[i].u_Price * s[i].quan_Sold;
           cout << "Product Sales : $" << s[i].prod_Sales << "\n";
          cout << "\n";

         tot_UnitsSold += s[i].quan_Sold;
        tot_Sales += s[i].prod_Sales;
       }
      cout << "Total Units Sold :" << tot_UnitsSold << endl;
      cout << "Total Sales :" << tot_Sales << endl;
      cout << "\n";
   }

   void display_Data(struct Sales s[], int n)
   {
      cout << "PRODUCT ID" << setw(15) << "UNIT PRICE" << setw(15) << "Q_SOLD" << setw(15) << "T_SALES" << "\n";

       for(int i = 0; i < n; i++)
      {
           cout << setw(7) << s[i].prod_ID << setw(15) << s[i].u_Price << setw(15) << s[i].quan_Sold << setw(15)
           << s[i].prod_Sales; cout << "\n";
       }
   }

   void sort_Array(struct Sales s[], int size)
   {
       bool swap;
       int temp;

       do
       {
           swap = false;
          for (int count = 0; count < (size - 1); count++)
          {
               if (s[count].prod_Sales > s[count + 1].prod_Sales)
               {
               temp = s[count].prod_Sales;
               s[count].prod_Sales = s[count + 1].prod_Sales;
               s[count + 1].prod_Sales = temp;
              swap = true;
               }
           }
       } while (swap);

  int main()
   {
       const int num_Products = 15;
      Sales_product[num_Products];

       input(product, num_Products);

      cout << "Original Array";
       cout << "\n";
      display_Data(product, num_Products);

       sort_Array(product, num_Products);

      cout << "Sorted Array";
       cout << "\n";
      display_Data(product, num_Products);


 return 0;
   }


