//***********************************************************
// EchoLine program
// This program reads and echoes the characters from one line
// of an input file
//***********************************************************
#include <iostream>
#include <fstream>                // For file I/O

using namespace std;

int main()
{
  char   inChar;                  // An input character
  ifstream inFile;                // Data file
  int count=1;

  inFile.open("text.dat");        // Attempt to open input file
  if (!inFile)                    // Was it opened?
  {
    cout << "Can't open the input file.";  // No--print message
    return 1;                     // Terminate program
  }
  inFile.get(inChar);             // Get first character
  while (inChar != '\n')
  {
    cout << inChar;               // Echo it
    inFile.get(inChar);           // Get next character
    count++;
  }
  cout << endl<<count<<endl;
  return 0;
}

/*datafile contents ...
Now is the time for all good men to come to the aid of their party.
*/
