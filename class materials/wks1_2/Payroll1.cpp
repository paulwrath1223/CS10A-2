// This program Payroll1.cpp calculates hourly wages, including overtime.
#include <iostream>
#include<cstdlib>
using namespace std;

int main()
{
   double basePayRate     = 18.25,   // Base pay rate
          overtimePayRate = 27.38,   // Overtime pay rate (1.5 * base)
          regularHours    = 40.0,    // Regular hours worked
          overtimeHours   = 10,      // Overtime hours worked
          regularWages,              // Computed regular wages
          overtimeWages,             // Computed overtime wages
          totalWages;                // Computed total wages

   // Calculate regular wages
   regularWages = basePayRate * regularHours;

   // Calculate overtime wages
   overtimeWages = overtimePayRate * overtimeHours;

   // Calculate total wages
   totalWages = regularWages + overtimeWages;

   // Display total wages
   cout << "Wages for this week are $\t\t" << totalWages << endl;
   system("PAUSE");
   return 0;
}
