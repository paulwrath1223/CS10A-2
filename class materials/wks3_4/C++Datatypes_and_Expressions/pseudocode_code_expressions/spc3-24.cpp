// This program calculates the number of vines that can fit
// in a row in a vineyard.
#include <iostream>
using namespace std;

int main()
{
	// Variables
	double vines, rowLength, endPostLength, spaceBetweenVines;

	// Get the needed input.
	cout << "Enter the length of the row, in feet: ";
	cin >> rowLength;
	cout << "Enter the length of an endpost assembly, in feet: ";
	cin >> endPostLength;
	cout << "Enter the space between the vines, in feet: ";
	cin >> spaceBetweenVines;

	// Calculate the number of vines.
	vines = (rowLength - 2 * endPostLength) / spaceBetweenVines;

	// Display the result.
	cout << "You can fit " << vines << " vines in the row." << endl;
	return 0;
}
