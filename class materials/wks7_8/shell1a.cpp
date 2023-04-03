//Program Shell1 prompts for and reads a one-digit number.
// Values between 0 and the digit (inclusive) are summed.
#include <iostream>
using namespace std;

int main ()
{
    int  counter;	// loop-control variable
    int  sum;		// running sum
    int  digit;

    cout  << "Enter a one-digit number; press return." << endl;
    cin  >> digit;
    counter =  	0;		/* TO BE FILLED IN */
    sum  =   0;  		/* TO BE FILLED IN */

    while (counter<=digit )     /* TO BE FILLED IN  */
    {
          sum=sum+counter;      /*  TO BE FILLED IN */
          counter++;
    }
    cout  << "Sum of digits between 0 and "
	  << digit  << " is "  << sum  << endl;
    return 0;
}
