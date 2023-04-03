// Program Miles prints miles in kilometers. -MILES_a.cpp
//shows the set-up and call for a user-defined value-returning function

#include <iostream>
using namespace std;

float  kilometers(int); //function prototype

int main ()
{
   // cout  << fixed  << showpoint;
    
    //function call with results displayed
    cout  << "One mile is " <<  kilometers(1) << " kilometers."  << endl;
    cout  << "Ten miles is " << kilometers(10)<< " kilometers."  << endl;
    cout  << "One hundred miles is "  << kilometers(100)<< " kilometers."  << endl;
   
    system("PAUSE");
    return 0;
}

//function definition
float  kilometers(int miles)
{
    const float KILO = 1.609;

    return KILO * float(miles);
}
