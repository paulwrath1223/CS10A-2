// Program filei_o_function_demo1 prompts for and reads two integer
// values that represent the sides of a rectangle.    
// The area of the rectangle is calculated and printed.

#include <iostream>
#include <fstream>
using namespace std;

void OpenForInput(ifstream&);
void GetData(ifstream&, int&, int&);			// function prototype

// GetData gets two integer values.

int main()
{
	ifstream file;
    int  height;
    int  width;
    int  area;

	OpenForInput(file);
    GetData(file, height, width);
    area = height * width;


    cout << "The area of the "  << height  << " by "
         << width  << " rectangle is "  << area  << endl;
    return 0;
}

//******************************************************************

void OpenForInput( /* inout */ ifstream& someFile )    // File to be
                                                       // opened
// Prompts the user for the name of an input file
// and attempts to open the file

// Postcondition:
//     The user has been prompted for a file name
//  && IF the file could not be opened
//         An error message has been printed
// Note:
//     Upon return from this function, the caller must test
//     the stream state to see if the file was successfully opened

{
    string fileName;    // User-specified file name

    cout << "Input file name: ";
    cin >> fileName;

    someFile.open(fileName.c_str());
    if ( !someFile )
        cout << "** Can't open " << fileName << " **" << endl;
}

//******************************************************

void GetData(ifstream& dataFile, int& firstValue, int& secondValue) 
// Post: The user has been prompted to input two values        
//       representing the length and width of a rectangle. 
//       These values have been read and returned in 
//       firstValue and secondValue.   
{   
    dataFile  >> firstValue  >> secondValue;
}
