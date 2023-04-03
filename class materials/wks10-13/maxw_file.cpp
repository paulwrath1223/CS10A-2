#include <iostream>
#include <fstream>

using namespace std; //introduces namespace std
/*Prototype*/
int maximum(int, int, int);
void get(int&, int&, int&);
void getfile(int&, int&, int&);

void getfile(int& a, int& b, int& c)
{
	ifstream file;
	
	file.open("data.in");
	//int a, b, c;
	
	file >>a>>b>>c;
	cout<<a<<" "<<b<<" "<<c;
}

void get(int& a, int& b, int& c)
{
	
	
	cout <<"Enter three integers: ";
	cin >>a>>b>>c;
}

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
	
	//cout <<"Enter three integers: ";
	//cin >>a>>b>>c;
	
	get (a, b, c);
	cout <<"Maximum is: " << maximum (a, b, c)<<endl;
	
	getfile(a, b, c);
	cout <<"Maximum is: " << maximum (a, b, c)<<endl;
		return 0;
}