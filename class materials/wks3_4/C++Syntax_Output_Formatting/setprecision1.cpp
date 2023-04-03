// This program (setprecision1.cpp) demonstrates how setprecision rounds a
// floating point value.
#include <iostream>
#include <iomanip> 		//required for setprecision
using namespace std;

int main()
{
   double quotient, number1 = 260.654, number2 = 23.45;

   quotient = number1 / number2;
   cout << quotient << endl;
   cout << setprecision(5) << quotient << endl;
   cout << setprecision(4) << quotient << endl;
   cout << setprecision(3) << quotient << endl;
   cout << setprecision(2) << quotient << endl;
   cout << setprecision(1) << quotient << endl;
//   system ("PAUSE");
   return 0;
}
