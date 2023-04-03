// This program demonstrates random numbers, providing
// a "seed" calling the time function, and generating random numbers between 1 and 6.
#include <iostream>
#include <cstdlib>            // Needed to use rand() and srand()
#include <ctime>              // Needed to "seed" the random number generator
using namespace std;

int main()
{
	int num1, num2, num3;  // These hold the 3 random numbers
	unsigned seed;            // Seed for the random number generator
	int max_value = 15;

	seed = time(0);           // Assigns a system-generated seed
                              // Alternatively, student can be prompted to enter a seed
    // Get a "seed" value from the user
	//cout << "Enter a seed value: ";
    //	cin  >> seed;

	// Set the random generator seed before calling rand()
	srand(seed);

	// Now generate random numbers to an integer between 1 and max_value and print three random numbers
	num1 = 1+ rand()% max_value;
	num2 = 1+ rand()% max_value;
	num3 = 1+ rand()% max_value;
	cout << num1 << " + " << num2 << " =  "<<endl;
	system("PAUSE");
	return 0;
}
