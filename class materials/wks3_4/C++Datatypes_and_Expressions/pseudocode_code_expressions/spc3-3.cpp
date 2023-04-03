// Chapter 3, Programming Challenge 3: Test Average
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants
	const double NUM_TESTS = 5;

	// Variables
	double testScore1,		// To hold the 1st test score
		   testScore2,		// To hold the 2nd test score
		   testScore3,		// To hold the 3rd test score
		   testScore4,		// To hold the 4th test score
		   testScore5,		// To hold the 5th test score
		   testScoreAvg;	// To hold the test score average

	// Get test score #1.
	cout << "Enter the first test score: ";
	cin >> testScore1;

	// Get test score #2.
	cout << "Enter the second test score: ";
	cin >> testScore2;

	// Get test score #3.
	cout << "Enter the third test score: ";
	cin >> testScore3;

	// Get test score #4.
	cout << "Enter the fourth test score: ";
	cin >> testScore4;

	// Get test score #5.
	cout << "Enter the fifth test score: ";
	cin >> testScore5;

	// Calculate the test score average.
	testScoreAvg = (testScore1 + testScore2 + testScore3 +
			        testScore4 + testScore5) / NUM_TESTS ;

	// Display the result.
	cout << "\nThe test score average is "
		 << fixed << showpoint << setprecision(1)
		 << testScoreAvg << endl;
	return 0;
}
