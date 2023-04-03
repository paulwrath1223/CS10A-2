#include <iostream>
using namespace std;

void p(int &a, int b);

int a,b,c,d;

int main()
{
	int a = 1, b = 2, c = 3, d = 4;
	p(a,b);
	cout << a << " " << b << " " << c << " " << d << endl;
}

void p(int &a, int b)
{
	int c;
	
	cout << a << " " << b << " " << c << " " << d << endl;
	a = 5; b = 6; c = 7; d = 8;
}
