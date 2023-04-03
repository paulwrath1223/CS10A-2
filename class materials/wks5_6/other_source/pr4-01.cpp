//	This program displays the values of true and false states.
#include <iostream>
using namespace std;

int main()
{
	bool trueValue, falseValue;
    int  x = 5, y = 10, a;

	trueValue = (x < y);
	falseValue = (y == x);

	a=x+y;

	cout << "True  is " << trueValue << endl;
	cout << "False is " << falseValue << endl;

	cout<<a<<endl;
 //     system("PAUSE");

	return 0;
}
