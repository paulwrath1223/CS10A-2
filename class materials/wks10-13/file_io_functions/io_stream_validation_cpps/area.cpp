// Program Area demonstrates stream testing. Not using a run-time input of a file name -Dale & Weems reference text
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int side1;		// One side of a rectangle
  int side2;		// The other side of a rectangle
  ifstream inData;	// File stream
  int area;			// Area of rectangle

  inData.open("myData.dat"); //for validation check, change the file name to myDatax.dat ..a non exsistent file
  if (!inData)
  {
    cout << "Input file not found." << endl;
    return 1;
  }
  inData >> side1 >> side2; //for another validation check change the data in myData to an alpha value such as b or z
  if (!inData)
  {
    cout  << "Data format incorrect.";
    return 2;
  }
  area = side1 * side2;
  cout << "Area is " << area  << endl;
  return 0;
}
