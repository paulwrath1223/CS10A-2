// Program Scope demonstrate scope rules and lifetime classes.
#include <iostream>
#include <fstream>
using namespace std;
void  SumNumbers(ifstream&, int&);

int main ()
{
    int  counter;
    int  sum = 0;
    int  number;
    ifstream  inNums;
    inNums.open("numeric.txt");
    {
	       int  sum = 0;
	       SumNumbers(inNums, sum);
	       cout  << "Output from first call to SumNumbers"
               << endl;
	       cout  << "Sum is "  << sum  << endl;

    }
    SumNumbers(inNums, sum);
    cout  << "Output from second call to SumNumbers"
           << endl;
    cout  << "Sum is "  << sum  << endl;
    return 0;
}
//**************************************
void  SumNumbers(ifstream& inFile, int& answer)
{
    int number;
    static int  counter = 1;
    while (counter <= 4)
    {
	       inFile  >> number;
	       answer = answer + number;
	       counter++;
    }
}

