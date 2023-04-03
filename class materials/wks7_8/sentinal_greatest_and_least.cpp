// The Greatest and Least of These
// This program finds the greatest and smallest value in a set of numbers.
// It uses a sentinel controlled loop to input and process the numbers.
#include <iostream>
using namespace std;

int main()
{
	int num,                  // Holds each number input by the user
		greatest,             // Largest value
		least,                // Smallest value
		sentinel = -99;       // End sentinel to terminate the loop

	// Input the first number
	cout << "Enter a whole number (" << sentinel << " to quit): ";
	cin  >> num;

	// Initialize largest and smallest variables to the first number
	greatest = least = num;	 

	// So long as the previous number entered was not -99, process it
	while (num != sentinel) 
	{ 
		if (num > greatest)
			greatest = num;
		else if (num < least)
			least = num;

		// Get the next number
		cout << "Enter another whole number (" << sentinel << " to quit): ";
		cin  >> num;
	}
  	// Display the results
	cout << "\nThe largest number you entered is " << greatest << ".\n";
	cout << "The smallest number you entered is " << least << ".\n";

	return 0;
}
