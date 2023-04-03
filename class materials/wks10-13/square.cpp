#include <iostream>

using namespace std; //introduces namespace std
/*Prototype*/
int square(int);
/*function definition*/
int square(int value)
{	
	
		return value * value;
}
	

int main ( )
{
	for (int x = 1; x <=10; x++)
		cout <<square (x) << "  ";
		cout <<endl;
		return 0;
}