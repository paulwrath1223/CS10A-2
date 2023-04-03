// This program uses setw with the cin object.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int SIZE = 5;
              char word[SIZE];

	cout << "Enter a word: ";
	cin  >> setw(5) >> word;
	cout << "You entered " << word << endl;
              system("PAUSE");
	return 0;
}
