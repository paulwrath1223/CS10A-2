// This program uses cin >> to read a word into a C-string.
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 12;
             char name[SIZE];    // name is a set of 12 memory cells
	
	cout << "Please enter your first name." << endl;
	cin  >> name;
	cout << "Hello, " << name << endl;
              system("PAUSE");
	return 0;
}
