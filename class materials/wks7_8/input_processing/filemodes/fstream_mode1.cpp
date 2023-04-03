//This program demonstrates the use of an fstream object
//and file mode flags.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
   fstream dataFile;  // file object
   string buffer;     // Used to read line from file
   
    // Create a new file named myfile.dat to write to.
   dataFile.open("myfile.dat", ios::out);   
	
   // Write two lines to the file.
   dataFile << "Now is the time for all good men" << endl
           << "to come to the aid of their country.";				
   // Close the file.			
   dataFile.close();
	
   // Open the file for input.
   dataFile.open("myfile.dat", ios::in); 
	
   // Read a line into a buffer and print the line.   
   getline(dataFile, buffer);                
   cout << buffer << endl; 
	
   // Read a second line and print it.                 
   getline(dataFile, buffer);                
   cout << buffer << endl; 
	
   // Close the file.                 
   dataFile.close();
}
