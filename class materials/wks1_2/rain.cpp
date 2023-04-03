// Program Rain calculates the average rainfall over a period 
// of days.  The number of days and the rain statistics are in
// file Rain.in.
 
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void GetInches(ifstream&, int&, float&);
// Rain statistics are read from a file; the average is 
// returned.

int main()
{
    float  average;          // average rain fall
    float totalRain;         // total accumulated rain
    int numberOfDays;        // number of days in calculation
    ifstream  rainFile;      // data file

    cout << fixed << showpoint;       // Set up floating pt.
                                      //   output format

    rainFile.open("Rain.In");
    
    GetInches(rainFile, numberOfDays, totalRain);

    if (totalRain == 0.0)
	cout  <<"There was no rain during this period."
	      << endl;
    else
    {
	average = totalRain / numberOfDays;
	cout  << "The average rain fall over "
	<< numberOfDays;
	cout  << " days is " << setw(1)  << setprecision(3)
	      << average <<endl;
    }

    return 0;
}

//******************************************************

void  GetInches(ifstream& rainFile, int& numberOfDays,
      float& totalRain)
// Pre:  rainFile has been opened.
//       numberOfDays is the first value on rainFile, followed 
//       by numberOfDays real values representing inches of 
//       rain.
// Post: numberOfDays is read from rainFile.
//       Number of inches of rain for numberOfDays are read 
//       and their sum is returned in totalRain.

{
	  float  inches;         // Day's worth of rain
	  int  counter;          // loop control variable

	  rainFile >> numberOfDays;
	  totalRain = 0.0;
	  counter = 1;
	  if (!rainFile)
	    cout  << "file not found"  << endl;
	    else
	  while (counter <= numberOfDays)
	  {
		rainFile >> inches;
		totalRain = totalRain + inches;
		counter++;
	  }
}
