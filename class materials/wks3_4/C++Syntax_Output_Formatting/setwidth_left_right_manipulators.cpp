// This program (setwidth_left_right_manipulators.cpp) demonstrates how to use manipulators to right and left justify output.

#include <iostream>    //includes fixed, showpoint and left manipulators
#include <iomanip>     //required for setprecision and setw

using namespace std;

int main()
{

   //section below shows how to use manipulators to right and left justify spaces when using setw

   double x= 346.678, y=34.3, z=1.678;

   //use the setw manipulator to display variables x,y,z right-justified (default)in a print field of 10 spaces on seperate lines
   cout<<setw(10)<<x<<endl;
   cout<<setw(10)<<y<<endl;
   cout<<setw(10)<<z<<endl;


   cout<<left; //set the left manipulator to left justify spaces when using setw

  //use the setw manipulator to display variables x,y,z left-justified in a print field of 10 spaces on seperate lines
   cout<<setw(10)<<x<<endl;
   cout<<setw(10)<<y<<endl;
   cout<<setw(10)<<z<<endl;

//   system ("PAUSE");
   return 0;
}
