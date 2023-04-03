// Program StringRead reads and writes strings.

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main ()
{
     ifstream inFile;
     ofstream outFile;
     string   inString1;
     string   inString2;

     inFile.open("strData.in");
    
 
  
   
     outFile  << inString1  << endl;
     outFile  << inString2  << endl;
     system("PAUSE");
     return 0;
}

