//******************************************************************
// chapter 3 - User-defined C++ Functions -MILES_b.cpp
// Building user-defined value-returning functions and void functions
// Program Miles prints miles in kilometers
//******************************************************************

#include <iostream>

using namespace std;

void Hdr();			        //void function prototype
float kilometers (int);		//value-returning function prototype

int main()
{
    //cout 	<< fixed <<showpoint;	// for decimal output
    Hdr ();				//void function call
    
    cout	<<"One mile is " <<kilometers (1)<<" kilometers." <<endl;
    cout	<<"Ten miles is "<<kilometers (10)<<" kilometers." <<endl;
    cout	<<"One hundred miles is " <<kilometers (100)<<" kilometers." <<endl;

    system("PAUSE");
    return 0;
}
//*******value-returning function definition***********************
float kilometers (int miles)
{
	const float KILO = 1.609;
	return KILO * miles;
}
//********void function definition********************************
void Hdr()
{
	cout <<"//******************************************************************"<<endl;
	cout <<"// chapter 3 - User-defined C++ Functions"<<endl; 
	cout <<"// Building user-defined value-returning functions and void functions"<<endl; 
	cout <<"// Program Miles prints miles in kilometers"<<endl; 
	cout <<"//******************************************************************"<<endl;
}
