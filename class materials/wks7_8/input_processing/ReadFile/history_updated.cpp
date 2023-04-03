// Program History reads data from a file character-by-character but uses two char variables
// output is sent the screen and also to another file.  Nothing is 
// known about how the values are keyed on the input file.



#include <iostream>
#include<fstream>

using namespace std;

int main()
{
   
   // char letter;
    char prev;
    char curr;
    ifstream  inFile;
    ofstream  outFile;

    inFile.open("history.d1");
    outFile.open("history2.d2");
    
    inFile.get(prev); //priming read
    
    while(inFile)
    {
       cout<<prev;
       outFile<<prev;
       inFile.get(curr);
       prev=curr;
}

inFile.close();
outFile.close();
inFile.clear();
outFile.clear();
   
    system("PAUSE");
    return 0;
}



