// Program History reads data from a file character-by-character and writes it to the screen
// and also outputs content to another file.  Nothing is
// known about how the values are keyed on the input file.


#include <iostream>
#include<fstream>

using namespace std;

int main()
{

    char letter;
    ifstream  inFile;
    ofstream  outFile;

    inFile.open("history.d1");
    outFile.open("sujan.txt");

    inFile.get(letter); //priming read

    while(inFile)
    {
       cout<<letter;
       outFile<<letter;
       inFile.get(letter);
}

inFile.close();
outFile.close();
inFile.clear();
outFile.clear();

 //   system("PAUSE");
    return 0;
}



