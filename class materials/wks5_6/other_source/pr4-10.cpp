// This menu-driven program uses an if/else statement to carry
// out the correct set of actions based on the user's menu choice. 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants for membership rates
	const double ADULT_RATE  = 40.0;
	const double CHILD_RATE  = 20.0;
	const double SENIOR_RATE = 30.0;

	int choice;           // Menu choice
	int months;           // Number of months
	double charges;       // Monthly charges

	// Display the menu and get the user's choice
	cout << "   Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin  >> choice;

	// Set the numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	// Use the menu selection to execute the correct set of actions 
	if (choice == 1)
	{	cout << "\nFor how many months? ";
		cin  >> months;
		charges = months * ADULT_RATE;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 2)
	{	cout << "\nFor how many months? ";
		cin  >> months;
		charges = months * CHILD_RATE;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice == 3)
	{	cout << "For how many months? ";
		cin  >> months;
		charges = months * SENIOR_RATE;
		cout << "The total charges are $" << charges << endl;
	}
	else if (choice != 4)
	{	cout << "The valid choices are 1 through 4. Run the\n"
		     << "program again and select one of those.\n";
	}
	system("PAUSE");
	return 0;
}
