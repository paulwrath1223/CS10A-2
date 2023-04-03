// This program uses an if/else if statement to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
// It validates the user's input.
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
	
	if ((testScore < 0) || (testScore > 100)) // Input validation
	{  // testScore is invalid
		cout << testScore << " is an invalid score.\n";
		cout << "Run the program again and enter a value\n";
		cout << "in the range of 0 to 100.\n";
	}
	else
	{  // testScore is valid so determine the letter grade
		if (testScore < 60)
			grade = 'F';
		else if (testScore < 70)
			grade = 'D';
		else if (testScore < 80)
			grade = 'C';
		else if (testScore < 90)
			grade = 'B';
		else     // If we got this far, testScore must be >= 90
			grade = 'A';
			
		// Display the letter grade	
		cout << "Your grade is " << grade << endl;
	}
              system("PAUSE");
	return 0;
}
