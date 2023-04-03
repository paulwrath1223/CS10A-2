// This program illustrates the conditional operator.
// It adjusts hours to 5 if fewer than 5 hours were worked.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double PAY_RATE = 50.0;
	double hours, charges;

	cout << "How many hours were worked? ";
	cin  >> hours;

	hours = (hours < 5) ? 5 : hours;    // Conditional operator
	charges = PAY_RATE * hours;

	cout << fixed << showpoint << setprecision(2);
	cout << "The charges are $" << charges << endl;
	return 0;
}

/*if (hours<5)
     hours=5;
  charges = PAY_RATE * hours; */
