// Program IODemo demonstrates how to use files

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout  << fixed  << showpoint;

    float val1, val2, val3, val4;	// declares 4 variables
    ifstream inData;			// declares input stream
    ofstream outData;			// declares output stream

    inData.open("Data.In");
    // binds program variable inData to file "Data.In"
    outData.open("Data.Out");
     // binds program variable outData to file "Data.Out"

    inData  >> val1 >> val2 >> val3 >> val4;	// inputs 4 values
    outData  << val4  << endl;
    outData  << val3  << endl;
    outData  << val2  << endl;
    outData  << val1  << endl;	// outputs 4 values
    return 0;
}



