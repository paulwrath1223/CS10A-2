// Program Area demonstrates stream testing
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int side1;		// one side of a rectangle
    int side2;		// the other side of a rectangle
    ifstream inData;	// file stream
    int area;		// area of rectangle

    inData.open("myData.dat");
    if (!inData)
    {
        cout  << "Input file not found."  << endl;
        return 1;
    }
    inData >> side1 >> side2;
    if (!inData)
    {
        cout  << "Data format incorrect.";
        return 2;
    }
    area = side1 * side2;
    cout  << "Area is "  << area  << endl;
    return 0;
} 


