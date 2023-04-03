#include <iostream>
using namespace std;

void test1(int a, int &b);
void test2(int &b, int c);

int main()
{
	int a = 1, b = 2, c = 3;
	test1(a,b);
	cout << a << " " << b << " " << c << endl;
	test1(b,c);
	cout << a << " " << b << " " << c << endl;
	test2(a,b);
	cout << a << " " << b << " " << c << endl;
	test2(c,b);
	cout << a << " " << b << " " << c << endl;
	return 0;
}

void test1(int a, int &b)
{
	int c;
	
	c = 5;
	a = b + c;
	b = a + c;
}

void test2(int &b, int c)
{
	c = 10;
	b = c + b;
}
	