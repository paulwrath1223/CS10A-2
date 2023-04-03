// This program determines whether or not an applicant qualifies
// for a loan. To qualify they must make at least $35,000 a year
// or have been at their current job for more than 5 years. It uses
// the ! logical operator to reverse the logic of the if statement.
#include <iostream>
using namespace std;

int main()
{
	double income;      // Annual income
	int years;          // Years at the current job

	// Get annual income and years on the job 
	cout << "What is your annual income? ";
	cin  >> income;
	cout << "How many years have you worked at your current job? ";
	cin  >> years;

	// Determine if the applicant qualifies for a loan
	if (!( (income >= 35000) || (years > 5) ))  // Uses logical NOT
	{
		cout << "You must earn at least $35,000 or have been employed\n";
		cout << "for more than 5 years to qualify for a loan.\n";
	}
	else
		cout << "You qualify for a loan.\n";
              system("PAUSE");
	return 0;
}
