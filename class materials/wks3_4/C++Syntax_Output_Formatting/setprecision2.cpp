// This program (setprecision2.cpp) demonstrates how setprecision rounds a floating point value.
#include <iostream>
#include <iomanip>      //Required for setprecision
using namespace std;

int main()
{
   //section below shows how setprecision affects the way various values are displayed

   double dollars= 42.56;
   cout<<dollars<<endl;                       	//displays 42.56
   cout<<setprecision(5)<<dollars<<endl;      //displays 42.56

   double value1= 38.92789;
   cout << setprecision(3) << value1 << endl;   //value displayed 38.9

   double value2= 63.34567;
   cout << setprecision(2) << value2 << endl;   //value displayed 63

   int number=21;
   cout << setprecision(5) << number << endl;  //value displayed 21

   float item=109.5;
   cout << setprecision(4) << item << endl;    //value displayed 109.5

//   system ("PAUSE");
   return 0;
}
