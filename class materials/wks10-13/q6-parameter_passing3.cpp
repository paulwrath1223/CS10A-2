//q6-parameter_passing3.cpp
#include <iostream>
using namespace std;

void Test(int&,int&,int&);

int main()
{
	int a,b,c;

	Test (a,b,c);
	b = b + 10;
	cout<<"Within main after the call we have following values "<<a<<" "<<b<<" "<<c;
	return 0;
}

void Test(int& z,int& x,int&a)
{
	cout<<"Please enter three numbers"<<endl;
	cin>>z>>x>>a;
	a=z*x+a;
	cout<<"In function Test the updated values are as follows "<<z<<" "<<x<<" "<<a<<endl;
}
