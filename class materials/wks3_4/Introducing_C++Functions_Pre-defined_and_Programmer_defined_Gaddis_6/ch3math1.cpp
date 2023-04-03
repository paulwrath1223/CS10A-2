//******************************************************************
// chapter 3 - Value-Returning Functions - ch3math1.cpp
// Using preprogrammed functions from the standard library
//******************************************************************
#include <cmath>		//for math functions
#include <iostream>

using namespace std;

int main()
{
    
    //cout << fixed << showpoint;              // for decimal output.
    int value;
                          
    //function calls with results displayed
    cout <<"pow (3.0, 4.0) =" << pow (3.0, 4.0)<<endl;
    cout <<"sqrt (81.0) =" << sqrt (81.0) <<endl;
    value=pow (2.0, 4.0);
    
    cout<<value<<endl;
   
    system ("PAUSE");
    return 0;
}

