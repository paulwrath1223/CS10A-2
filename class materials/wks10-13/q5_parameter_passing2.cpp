//q5_parameter_passing2.cpp
#include <iostream>
using namespace std;

void Test (int&, int);

int main()
{
	int d, e;
	d = 12;
	e = 14;
	Test (d, e);
	cout<<"In the main function after the first call,"<<"the variables equal "<<d<<' '<<e<<endl;
	d = 15;
	e = 18;
	Test(e, d);
	cout<<"In the main function after the second call,"<<"the variables equal "<<d<<' '<<e<<endl;
//        system("PAUSE");
        return 0;
}
void Test (int& s, int t)
{
	s = 3;
	s = s + 2;
	t = 4 * s;
	cout<<"In function Test, the variables equal "<<s<< ' '<<t<<endl;
}

