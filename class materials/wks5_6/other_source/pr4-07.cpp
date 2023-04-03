// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
	int testScore;    // Holds a numeric test score
	char grade;       // Holds a letter grade

	// Get the numeric score
	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin  >> testScore;

	// Determine the letter grade
	if (testScore < 60)
		grade = 'F';
	else if (testScore < 70)
		grade = 'D';
	else if (testScore < 80)
		grade = 'C';
	else if (testScore < 90)
		grade = 'B';
	else if (testScore <= 100)
		grade = 'A';

	// Display the letter grade
	cout << "Your grade is " << grade << ".\n";
    //          system("PAUSE");
	return 0;
}
