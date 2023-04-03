// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
// A trailing else has been added to catch test scores > 100.
#include <iostream>
using namespace std;

int main()
{
	int testScore;          // Holds a numeric test score
	char grade;             // Holds a letter grade
	bool goodScore = true;  // Is the score valid?

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
	else
		goodScore = false;   // The score was greater than 100

	// If the score is valid, display the corresponding letter grade;
	// otherwise, display an error message
	if (goodScore)
		cout << "Your grade is " << grade << endl;
	else
		cout << "We do not give scores higher than 100.\n";
//	system("PAUSE");
	return 0;
}
