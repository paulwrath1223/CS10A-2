//*******************************************************************************************************
// Program Read_Multiple_Files reads and prints all integer numbers on several data files using an
// EOF-controlled loop. User inputs the file name or types quit to exit the program. Sample files with
// good data Data1.dat and Data2.dat and one file Data3.dat with an incorrect data item.
//*********************************************************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
   ifstream inputFile;
   string filename;
   int intValue;

   // Get the filename from the user.
   cout << "Enter the filename: ";
   cin >> filename;

   //loop to open and read file data one at a time
   while(filename !="quit"){
      // Open the file.
      inputFile.open(filename.c_str());

      //a newer C++ implementation that has a better way of checking whether a file has been opened
      if(!inputFile.is_open()){
         cout<<"Could not open "<<filename<<endl;
         inputFile.clear();
      }
      else{
      cout << "Numbers on "<<filename<<":" << endl;
      inputFile >> intValue; //priming read ..could use some validation here too


       //if priming read data is good enter loop to continue reading until end of file
       while (inputFile){
           cout << intValue << " ";
           inputFile >> intValue;
        }
      }
   cout << endl;
   inputFile.close(); //close input stream connection to file
   inputFile.clear(); //clear the stream buffer or reset inputFile (may not be needed)
   cout<<"Please enter another filename or type quit to exit the program"<<endl;
   cin>>filename;
   }
  return 0;
}
