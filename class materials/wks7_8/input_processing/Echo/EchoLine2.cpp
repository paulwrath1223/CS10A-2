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
  char   inChar, choice;                  // An input character
  ifstream inFile;                // Data file
  int count=1;
  int whitespace=0;
  string filename;

do
{



  cout<<"Please enter a filename"<<endl;
  cin>>filename;

//  inFile.open("text.dat");        // Attempt to open input file

  inFile.open(filename.c_str());        // Attempt to open input file
  while (!inFile)                    // Was it opened?
  {
    cout << "Can't open the input file.";  // No--print message
    cout<<"Please enter a filename"<<endl;
  cin>>filename;
//  inFile.open("text.dat");        // Attempt to open input file
  inFile.open(filename.c_str());        // Attempt to open input file
   // return 1;                     // Terminate program
  }
  inFile.get(inChar);             // Get first character
  while (inFile)
  {
    cout << inChar;               // Echo it
    inFile.get(inChar);           // Get next character
    count++;
    if(inChar==' ')
      whitespace++;
  }
  cout << endl;

  cout<<count<<endl;
  cout<<whitespace<<endl;
  cout<<"Would you like to try another file?"<<endl;
  cin>>choice;

  inFile.close();
 count=1;
  whitespace=0;

}while(choice=='Y'||choice =='y');
  return 0;
}

/*datafile contents ...
Now is the time for all good men to come to the aid of their party.
*/
