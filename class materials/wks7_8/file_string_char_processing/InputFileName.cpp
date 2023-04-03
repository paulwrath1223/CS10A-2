//********************************************************
// This program demonstrates run-time input of file names.
//********************************************************

#include <fstream>
#include <iostream>
#include <string>
#include<cstdlib>

using namespace std;
int main ()
{
  ifstream inFile;
  string   fileName;
  string inputString;
  cout << "Enter the input file name: ";
  cin >> fileName;
  inFile.open(fileName.c_str());

  getline(inFile, inputString);
  cout << "First line of file: " << inputString << endl;
//system(“PAUSE”);
  return 0;
}

//use sample file testData.in
