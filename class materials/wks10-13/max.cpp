#include <iostream>

using namespace std; //introduces namespace std
/*Prototype*/
int maximum(int, int, int);
/*function definition*/
int maximum(int x, int y, int z)
{	
	int max = x;
	if (y>max)
		max = y;
	if (z>max)
		max = z;
		return max;
}
	

int main ( )
{
	int a, b, c;
	
	cout <<"Enter three integers: ";
	cin >>a>>b>>c;
	cout <<"Maximum is: " << maximum (a, b, c)<<endl;
		return 0;
}