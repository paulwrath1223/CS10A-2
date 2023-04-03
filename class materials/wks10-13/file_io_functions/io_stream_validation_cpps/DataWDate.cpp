//****************************************************************
// Program ReadFile reads and prints all integer numbers on file
// myData.dat using an EOF-controlled loop.
//****************************************************************
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
  ifstream inData;
  inData.open("myDataWDate.dat");
  
  int intValue;
  int count = 0;
  string date;
  cout << "Numbers on file myData.dat: " << endl;
  inData >> intValue;
  while (inData)
  {
    count++;
    cout << intValue << " ";
	inData >> intValue;
  }
  cout << endl;
  getline(inData, date);
  cout << "Date on the file: " << date << endl;
  cout << "Number of values: " << count << endl;
  inData.close();
  return 0;
}  