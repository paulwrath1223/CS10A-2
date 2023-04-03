// Program AddSub reads in a letter (A or S) and two int values.
// If the letter is A, the two values are added.
// If the letter is S, the second is subtracted from the first.
// The answer is printed appropriately labeled.
// Convert the if/else selection control structure to a switch statement using appropriate cases.
#include<iostream>
using namespace std;

int main ()
{
    char  operatorCode;
    int  value1;
    int  value2;
    int  answer;

    cout  << "Input a letter and two integer values."  << endl;
    cout  << "If the letter is an A, the values are added."  << endl;
    cout  << "If the letter is an S,"
	  << "the second value is subtracted from the first." << endl;
    cin  >> operatorCode;
    cin  >> value1  >> value2;

    if (operatorCode == 'A' || operatorCode == 'S')
    {
        if (operatorCode == 'A')
        {
	   answer = value1 + value2;
	   cout  << value1  << " plus "  << value2
	      << " is "  << answer  << endl;
        }
        else
        {
	   answer = value1 - value2;
	   cout  << value1  << " minus "  << value2
	      << " is "  << answer  << endl;
        }
    }
    else
    cout<<"The operator code that was entered is invalid."<<endl;    
    return 0;
}
-----------------------------------------------
An additional programming challenge:
Write a C++ program that reads in three integer values that represent a month, date, and four-digit year. Your program should print the date in one of following formats depending on the user's input.

If the user enters 1, then print the month as a word ("January"), the date as an integer (11), and the year (1999).

If the user enters 2, then print the month as a three-letter abbreviation ( "Jan. "), date as an integer (11), and the year (1999).

If the user enters 3, then print month as an integer (01), the date as an integer (11), and the year (1999).
-----------------------------------------------------------------------
Here is a sample run (user's input shown in bold):

Please enter a date (three integers: month, day, year): 12 1 1999 

How would you like to print your date?
Month date, full year. (January 11, 1999): Enter 1. 
Abbreviated month date, full year (Jan. 1, 1999): Enter 2. 
Month/date/year (12/1/1999): Enter 3. 
1
If the user enters 1, then the output would be 
December 1, 1999.

