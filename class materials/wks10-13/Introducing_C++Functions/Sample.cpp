//******************************************************************
// Sample program - Sample.cpp includes two user-defined functions
// This program computes the square and cube of 27
//******************************************************************
#include <iostream>

using namespace std;

int Square( int ); //function prototype
int Cube( int ); //function prototype

int main()
{
    
  //  float value1=3.5;
    //function calls with result output to the display
    cout << "The square of 27 is " << Square(3.5) << endl; 
    cout << "and the cube of 27 is " << Cube(27) << endl;
    
    cout << "The square of 4 is " << Square(4) << endl;
    cout << "and the cube of 3 is " << Cube(3) << endl; 
    
    system ("PAUSE");
    return 0;
}

//function definition
int Square( int n )//function heading
{
    return n * n;
}

//function definition
int Cube( int n )//function heading
{
    return n * n * n;
}
