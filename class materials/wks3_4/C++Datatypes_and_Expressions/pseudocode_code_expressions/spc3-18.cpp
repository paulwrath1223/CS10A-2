// Chapter 3, Programming Challenge 18: Interest Earned
#include <iostream>
#include <cmath>  // For the pow function
#include <iomanip>
using namespace std;

int main()
{
   int times;        // To hold the times interest is compounded
   double principal; // To hold the principal investment
   double rate;      // To hold the interest rate
   double interest;  // To hold the interest earned
   double amount;    // To hold the amount in savings

   // Get the principal amount.
   cout << "Enter the principal amount: ";
   cin >> principal;

   // Get the interest rate.
   cout << "Enter the interest rate: ";
   cin >> rate;

   // Get the number of times compounded.
   cout << "Enter the number of times interest will be compounded: ";
   cin >> times;

   // Calculate the amount in savings after one year.
   amount = principal * pow(1 + (rate * 0.01 / times), times);

   // Calculate the interest earned.
   interest = amount - principal;

   // Display the results.
   cout << fixed << showpoint << setprecision(2)
        << "\nInterest Rate:      " << setw(8) << rate << "%"
        << "\nTimes Compounded:   " << setw(8) << times
        << "\nPrincipal:         $" << setw(8) << principal
        << "\nInterest:          $" << setw(8) << interest
        << "\nAmount in Savings: $" << setw(8) << amount
        << endl << endl;
   return 0;
}
