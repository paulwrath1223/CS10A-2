// This program (setwidth2.cpp) demonstrates the setw manipulator used with values of various data types.

#include <iostream>    //includes fixed, showpoint and left manipulators
#include <iomanip>     //required for setprecision and setw

using namespace std;

int main()
{
   int intValue = 3456;
   double doubleValue = 92.5;
   string fname = "Seth Evans Sarkar";

   cout  << setw(5) << intValue << endl;
   cout << setw(8) << doubleValue << endl;
   cout << setw(16) << fname <<  endl;

//   system("PAUSE");
   return 0;
}
