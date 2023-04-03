// This program illustrates a bug that occurs when independent if/else
// statements are used to assign a letter grade to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
	int testScore;    // Holds a numeric test score
	char grade;       // Holds a letter grade

	// Get the numeric score
	cout << "Enter your test score and I will tell you\n";
	cout << "the letter grade you earned: ";
	cin  >> testScore;

	// Determine the letter grade. What grade will be assigned?
	if (testScore < 60)
		grade = 'F';
	if (testScore < 70)
		grade = 'D';
	if (testScore < 80)
		grade = 'C';
	if (testScore < 90)
		grade = 'B';
	if (testScore <= 100)
		grade = 'A';

	// Display the letter grade
	cout << "Your grade is " << grade << ".\n";
//              system("PAUSE");
	return 0;
}
