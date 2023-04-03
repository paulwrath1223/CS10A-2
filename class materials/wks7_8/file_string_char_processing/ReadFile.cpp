//****************************************************************
// Program ReadFile reads and prints all integer numbers on file
// myData.dat using an EOF-controlled loop.
//****************************************************************
#include <iostream>
#include <fstream>//step 1
using namespace std;

int main ()
{
  ifstream inData;//step 2
  inData.open("numbers.txt"); //step 3

  if(!inData)
  {
      cout<<"FILE NOT FOUND"<<endl;
      return 1;
  }

  int intValue;

  cout << "Numbers on file numbers.txt" << endl;
  inData >> intValue; //step 4 ....priming read
  while (inData)
  {
    cout << intValue << " ";
	inData >> intValue; //step 4
  }
  cout << endl;
  inData.close(); //step 5
  return 0;
}
