//Loops for shapes - Triangle Displays
#include<iostream>
using namespace std;

int main()
{
   //Display#1
    int row = 0, rows = 4;

    while( row < rows)
    {
        cout << '+' << endl;
        row++; //loop update condition
    }

    //Display#2
      int row = 0, rows = 5, charcount=0;

    while( row < rows)
    {
        //charcount=0;
        while(charcount <= row)
        {
            cout << '+' ;
            charcount++; //loop update condition
        }
        cout << endl;

        charcount=0;
        row++; //loop update condition
    }


    //Display#3
    int row = 0, rows = 5, pluscount=0;
    char plus = '+';

    while( row < rows)
    {
        //pluscount=0;
        while(pluscount <= row)
        {
            cout << plus;
            pluscount++; //loop update condition
        }
        cout << endl;
        pluscount=0;
        row++; //loop update condition
    }


    //Display#4
    int row = 1, rows = 5, pluscount=1, oddpluscount=0;
    char plus = '+';

    while( row <= rows)
    {
        //calculation to derive odd limit of characters for each row
        oddpluscount= 2 * row - 1;
        //pluscount=0;
       // while(pluscount <= row)
        while(pluscount <= oddpluscount)
        {
            cout << plus;
            pluscount++; //loop update condition
        }
        cout << endl;
        pluscount=1;
        row++; //loop update condition
    }


    //Display#5
    int row = 1, rows = 5, pluscount=1, oddpluscount=0;
    char plus = '+';

    while( rows >= row)
    {
        //calculation to derive odd limit of characters for each row
        oddpluscount= 2 * rows - 1; //not change in formula
        //pluscount=0;
       // while(pluscount <= row)
        while(pluscount <= oddpluscount)
        {
            cout << plus;
            pluscount++; //loop update condition
        }
        cout << endl;
        pluscount=1;
        rows--; //note change in loop update condition
    }


    //Display#6
       int row = 1, rows = 11, pluscount=1, oddpluscount=0;
    char plus = '+';

    //top half
    while( row <= rows/2)
    {
        //calculation to derive odd limit of characters for each row
        oddpluscount= 2 * row - 1;

        while(pluscount <= oddpluscount)
        {
            cout << plus ;
            pluscount++; //loop update condition
        }
        cout << endl;
        pluscount=1;
        row++; //loop update condition
    }

    // cout <<row <<endl; //to test row value at the middle

    //bottom half
    rows= row;
    row=1;
    pluscount = 1;

    while( rows >= row)
    {
        //calculation to derive odd limit of characters for each row
        oddpluscount= 2 * rows - 1; //note change in formula

        while(pluscount <= oddpluscount)
        {
            cout << plus ;
            pluscount++; //loop update condition
        }
        cout << endl;
        pluscount=1;
        rows--; // note change in loop update condition
    }


   return 0;
}
