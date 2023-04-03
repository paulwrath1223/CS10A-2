#include <iostream>	//trace1.cpp
using namespace std;

void SomeFunc(float);	//?

const int a = 20;	// a global constant
int b = 13;			// ?
int c;			// ?

int main ( )
{
	 b = 5;		// ?
     c = 7;		// ?
     SomeFunc (56.7);	// ?
     return 0;
}

void SomeFunc (float c)	// ?
{
       float b;		// ?

       b = 2.8;			// ?
       cout << " a = " << a;	// ?
       cout << " b = " << b;	// ?
       cout << " c = " << c;	// ?
}	
