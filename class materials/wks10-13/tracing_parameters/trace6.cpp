#include <iostream>
using namespace std;

void first(int &x);
void second(int &x, int y);

int x,y,z;

int main()
{
	x = 40;
	y = 50;
	z = 60;
	second(z, y);
	cout << x << " " << y << " " << z << endl;
	first(y);
	cout << x << " " << y << " " << z << endl;
	first(x);
	cout << x << " " << y << " " << z << endl;
	second(y, x);
	cout << x << " " << y << " " << z << endl;
	first(z);
	cout << x << " " << y << " " << z << endl;
	return 0;
}
	
void first(int &x)
{
	int y;
	
	x = x * 2;
	y = x + z;
	z = z % 10;
}

void second(int &x, int y)
{
	y = y + 1;
	x = y + z;
	z = x + z;
}

