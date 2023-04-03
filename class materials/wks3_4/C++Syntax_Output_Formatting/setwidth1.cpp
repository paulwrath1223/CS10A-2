//This program (setwidth1.cpp) displays two rows of numbers and demonstrates the use of the setw(fieldwidth) manipulator

#include <iostream>    //includes fixed, showpoint and left manipulators
#include <iomanip>     //required for setprecision and setw

using namespace std;

int main()
{
    int value;
    int value1 =1234, value2 = 6, value3 =900, value4 =12,value5=5, value6= 2345;

    //display the first two rows of values

    cout<<value1<<value2<<value3<<endl;
    cout<<value4<<value5<<value6<<endl;

    //display two rows use the setw(fieldwidth) manipulator
    cout<<setw(6)<<value1<<setw(6)<<value2<<setw(6)<<value3<<endl;
    cout<<setw(6)<<value4<<setw(6)<<value5<<setw(6)<<value6<<endl;

    //another setw use
    value=23134;
    cout<<setw(2)<<value<<endl;


//system("PAUSE");
return 0;
}
