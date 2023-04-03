// This program (setprecision_fixed.cpp) demonstrates what happens when fixed and setprecision manipulators are used together.
// The value specified by the setprecision manipulator will be the number of digits to appear after the decimal point,
// not the number of significant digits.

#include <iostream>    //includes fixed, showpoint and left manipulators
#include <iomanip>     //required for setprecision and setw

using namespace std;

int main()
{
   cout<<fixed; //another stream manipulator forces cout to print the digits in fixed-point notation, or decimal

   //section below shows how setprecision with the fixed manipulator affects the way various values are displayed

   double x= 345.6, y=789.0;
   cout<<setprecision(6)<<x<<endl;      	//displays 345.6
   cout<<y<<endl;                           //displays 789

   double value1= 38.92789;
   cout << setprecision(3) << value1 << endl;   //value displayed 38.928

   double value2= 63.34567;
   cout << setprecision(2) << value2 << endl;   //value displayed 63.35

   int number=21;
   cout << setprecision(5) << number << endl;  	//value displayed 21

   float item=109.5;
   cout << setprecision(4) << item << endl;    	//value displayed 109.5000

//   system ("PAUSE");
   return 0;
}
