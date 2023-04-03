// This program uses a loop to read and display all of the numbers in 
// a file. The >> operator return value is used to control the loop.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int number;
	ifstream inputFile;

	inputFile.open("numbers.dat");    // Open the file
	if (!inputFile)				      // Test for errors
		cout << "Error opening file.\n";
	else
	{   while(inputFile >> number)    // Read a number and execute the
	    {                             // loop while read was successful
			cout << number << "   ";  // Display the number
		}
		cout << endl;
		inputFile.close();            // Close the file
	}
        system("PAUSE");
	return 0;
}
