// This program uses the >> operator to read rectangle dimensions
// from a file. It demonstrates that, as with cin, more than one
// value can be read in from a file with a single statement.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream inFile;
	int length, width;

	inFile.open("dimensions.txt");
	cout << "Reading dimensions of 4 rectangles from the file.\n\n";

	// Process rectangle 1
	inFile >> length >> width;
	cout << "Area of rectangle 1: " << (length * width) << endl;

	// Process rectangle 2
	inFile >> length >> width;
	cout << "Area of rectangle 2: " << (length * width) << endl;

	// Process rectangle 3
	inFile >> length >> width;
	cout << "Area of rectangle 3: " << (length * width) << endl;

	// Process rectangle 4
	inFile >> length >> width;
	cout << "Area of rectangle 4: " << (length * width) << endl;

	// Close the file
	inFile.close();
	cout << "Done.\n";

	return 0;
}
