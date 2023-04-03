// Program datatype demonstrates how to declare and use different C++ simple data types
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // This section uses an integer data type.
   int oranges;

   oranges = 20;
   cout << "Today we sold " << oranges << " bushels of oranges.\n";

   // This section has variables of several of the integer types.
   int checking;
   unsigned int miles;
   long days;

   checking = -100;
   miles = 3567;
   days = 189000;
   cout << "We have made a long journey of " << miles;
   cout << " miles.\n";
   cout << "Our checking account balance is " << checking;
   cout << "\nAbout " << days << " days ago Columbus ";
   cout << "stood on this spot.\n";

      // This section demonstrates boolean variables.
    bool boolValue;

   boolValue = true;
   cout << boolValue << endl;
   boolValue = false;
   cout << boolValue << endl;

   // This section uses character literals.
    char letter;

   letter = 'A';
   cout << letter << '\n';
   letter = 'B';
   cout << letter << '\n';

   // This section also uses character literals but shows the ASCII value (see Appendix E pg. 1029)

   letter = 65;
   cout << letter << endl;
   letter = 66;
   cout << letter << endl;

   // This section uses floating point data types.
   float distance;
   double mass;
   double shares = 220.0;
   double avgPrice = 14.67;

   distance = 1.495979E11;
   mass = 1.989E30;
   cout << "The Sun is " << distance << " meters away.\n";
   cout << "The Sun\'s mass is " << mass << " kilograms.\n";
    cout << "There were " << shares << " shares sold at $";
   cout << avgPrice << " per share.\n";

   //this section demonstrates the size of integers, long integers, and long doubles per your machine
   long double apple;

   cout << "The size of an integer is " << sizeof(int);
   cout << " bytes.\n";
   cout << "The size of a long integer is " << sizeof(long);
   cout << " bytes.\n";
   cout << "An apple can be eaten in " << sizeof(apple);
   cout << " bytes!\n";

 //  system ("PAUSE");
   return 0;
}
