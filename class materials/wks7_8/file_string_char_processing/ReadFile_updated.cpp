//****************************************************************
// Program ReadFile reads and prints all integer numbers on file
// myData.dat using an EOF-controlled loop.
//****************************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
  ifstream inData;
  string fileName;

  cout<<"Enter the input file name: ";
  cin>> fileName;
  inData.open(fileName.c_str());
 // inData.open("myData.dat");

  int intValue;

  cout << "Numbers on file myData.dat: " << endl;
  inData >> intValue;
  while (inData)
  {
    cout << intValue << " ";
	inData >> intValue;
  }
  cout << endl;
  inData.close();
 // system("PAUSE");
  return 0;
}
