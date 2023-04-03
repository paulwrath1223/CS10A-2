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
  string fileName;

  //prompt for input of a filename
  cout<<"Please enter a filename: ";
  cin>>fileName;

 // inFile.open("text.dat");        // Attempt to open input file

 inFile.open(fileName.c_str());        // Attempt to open input file

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
  }
  cout << endl;
  return 0;
}
