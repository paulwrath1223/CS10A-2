#include <iostream> //q2.cpp
using namespace std;

void DoThis (int&, int&);

int main ()
{
	int number1, number2;

	cout<<"Excercise "<<endl;

	DoThis(number1, number2);

	cout<<number1<<' '<<number2<<endl;
	return 0;
}

void DoThis (int& value1, int& value2)
{
	int value3;
	cout<<"Enter two integer values"<<endl;
	cin>>value3>>value1;
	value2=value1 + 10;
}
