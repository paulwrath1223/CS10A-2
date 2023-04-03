// This program uses a loop to read and display all the numbers in a
// file. The ifstream eof member function is used to control the loop.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;
	ifstream inputFile;

	inputFile.open("numbers.dat");       // Open the file
	if (!inputFile)                      // Test for errors
		cout << "Error opening file.\n";
	else
	{	inputFile >> number;             // Read the first number
		while (!inputFile.eof())         // While read was good; no eof yet
		{
			cout << number << "   ";     // Display the number
			inputFile >> number;         // Read the next number
		}
		cout << endl;
		inputFile.close();               // Close the file
	}
	system("PAUSE");
	return 0;
}
