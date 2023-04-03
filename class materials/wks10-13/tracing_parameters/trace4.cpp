#include <iostream>
using namespace std;

void p();

int b;

int main()
{
	int a,c;
	a = 4; b = 5; c = 6;
	cout << a << " " << b << " " << c << endl;
	p();
	cout << a << " " << b << " " << c << endl;
	return 0;
}

void p()
{
	int a;
	int c;
	
	cout << a << " " << b << " " << c << endl;
	a = 1; b = 2; c = 3;
	cout << a << " " << b << " " << c << endl;
}