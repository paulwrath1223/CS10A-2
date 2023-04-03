//************************************************************************
// Program format.cpp demonstrates the use of fieldwidth specifications.
#include <iostream>
#include <iomanip>
using namespace std;

const int INT_NUMBER = 1066;
const float FLT_NUMBER = 3.14159;

int main ()
{
    //variables declared
    float fltValue;
    int   intValue;
    double dblValue;

    //variables assignments with type casting within arithmetic expressions
    intValue = INT_NUMBER + int(FLT_NUMBER);                 //value assigned to variable is 1069
    fltValue = float(INT_NUMBER) + FLT_NUMBER;               //value assigned to variable is 1069.14159
    dblValue = double (INT_NUMBER) + double(FLT_NUMBER);     //value assigned to variable is 1069.14159

    cout << fixed << showpoint;  // Set up floating pt. output format

    //diplay showing various output formats
    cout << INT_NUMBER  << endl;
    cout << intValue  << endl;
    cout << setw(10)  << intValue;
    cout << setw(10)  << intValue << intValue /10 << endl;
    cout << fltValue  << endl; //interesting precision output
    cout << setprecision(10) << fltValue  << endl;
    cout << dblValue << endl; //interesting precision output
    cout << setw(10)  << setprecision(3) << fltValue << endl;
    cout << fltValue  << endl;
    cout << intValue  << setw(3) << intValue << setw(7) << intValue << endl;
    fltValue = 123456789.6;
    cout << fltValue << endl; //another interesting output
	cout.unsetf(ios::fixed | ios::showpoint); // turns off fixed and showpoint
	cout << fltValue << endl;

//	system("PAUSE");
    return 0;
}
