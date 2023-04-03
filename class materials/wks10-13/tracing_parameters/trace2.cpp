#include <iostream>
using namespace std;

void test2(int a, int b);
void test1(int &a, int &b);

int main()
{
	int a = 8, b = 10;
	
	test2(b,a);
	cout << a << " " << b << endl;
	test1(b,a);
	cout << a << " " << b << endl;
	test1(a,a);
	cout << a << " " << b << endl;
	return 0;
}

void test1(int &a, int &b)
{
	a = 4;
	b = 6;
	a = a + b;
	cout << a << " " << b << endl;
}

void test2(int a, int b)
{
	cout << a << " " << b << endl;
	a = 4;
	b = 6;
	a = a + b + 1;
	cout << a << " " << b << endl;
}