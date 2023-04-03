// This program pr 3-36 (Gaddis 9E)demonstrates random numbers, providing
// a "seed" calling the time function, and generating random numbers between 10 and 18.
#include <iostream>
#include <cstdlib>            // Needed to use rand() and srand()
#include <ctime>              // Needed to "seed" the random number generator
using namespace std;

int main()
{
	int num1, num2, num3;  // These hold the 3 random numbers
	unsigned seed;            // Seed for the random number generator
	int max_value = 18;
	int min_value =10;

	seed = time(0);           // Assigns a system-generated seed
                              // Alternatively, student can be prompted to enter a seed

	// Set the random generator seed before calling rand()
	srand(seed);

	// Now generate random numbers to an integer between 10 and max_value of 18 and print two random numbers
	num1 = rand()% (max_value-min_value+1)+ min_value;
	num2 = rand()% (max_value-min_value+1)+ min_value;
	num3 = num1+num2;
	cout << num1 << " + " << num2 << " =  "<<num3<<endl;
//	system("PAUSE");
	return 0;
}
