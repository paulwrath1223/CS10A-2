// Program Area calculates the area of a square.
// The user is prompted to enter the number of
// inches on each side.

#include <iostream>
using namespace std;

int main ()
{
    float  inches;

    cout  << "Enter the number of inches on a side "
          << endl;
    cout  << "Press the return key."
          << endl;
    cin  >> inches;
    cout  << endl  << "The area is "  << inches * inches  << "."
          << endl;
    return 0;
}
