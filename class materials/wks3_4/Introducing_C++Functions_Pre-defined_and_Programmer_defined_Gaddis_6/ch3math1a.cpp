//******************************************************************
// chapter 3 - Value-Returning Functions and Void Functions -ch3math1a.cpp
//the value-returning function is accessed from cmath ..a stand library file
//while the void function is a user-defined function 
//take note of the set-up and the call statements for these two functions
//******************************************************************
#include <cmath>		//for math functions
#include <iostream>

using namespace std;

void Hdr ();

int main()
{
    
    
    Hdr();	  //void function call
                          
    cout <<"pow (3.0, 4.0) =" << pow (3.0, 4.0)<<endl;
    cout <<"sqrt (81.0) =" << sqrt (81.0) <<endl;
     pow (3.0, 4.0);
    system ("PAUSE");
    return 0;
}

//*********************************
void Hdr ()
{
	cout << "//******************************************************************"<<endl;
	cout << "// chapter 3 - Value-Returning Functions Example#1" <<endl;
	cout << "// Using preprogrammed functions from the standard library" <<endl;
	cout << "//******************************************************************" <<endl;
}

