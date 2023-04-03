// This program (setprecision_showpoint.cpp) demonstrates what happens when showpoint and setprecision manipulators are used together.

#include <iostream>    //includes fixed, showpoint and left manipulators
#include <iomanip>     //required for setprecision and setw

using namespace std;

int main()
{

   //section below shows how setprecision without and with showpoint manipulator affects the way various values are displayed

   double x= 345.6, y=789.0;
   cout<<setprecision(6)<<x<<endl;   //displays 345.6..note no trailing zeroes indicates that 6 significant digits were ignored
   cout<<y<<endl;                    //displays 789..note no trailing zeroes indicates that 6 significant digits were ignored


   cout<<showpoint; //diplays decimal point and trailing zeroes for floating point numbers

   cout<<setprecision(6)<<x<<endl; //displays 345.600..notice now we have 6 significant digits display
   cout<<y<<endl;                  //displays 789.000..notice now we have 6 significant digits display


//   system ("PAUSE");
   return 0;
}
