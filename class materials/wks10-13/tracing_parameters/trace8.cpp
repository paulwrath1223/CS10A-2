#include <iostream> //trace8.cpp 
using namespace std; 


void Test ();

int main ( )
{
	Test ();
	Test ();
	Test ();
	return 0;
}

void Test ( )
{
	int i = 3;
	static int j = 3;

	i++;
	j++;
	cout << i << ' '<< j << endl;
}
