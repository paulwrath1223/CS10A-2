#include <iostream>  //q4.cpp
using namespace std;

int b=12;

void Change (int, int&);

int main()
{
	int a,b;
	a = 10;
	b = 7;

	Change (a, b);
	cout<<a<<' '<<b<<endl;
	return 0;
}

void Change (int x, int& y)
{
	int b;
	b = x;
	y = y + b;
	x = y;
}
