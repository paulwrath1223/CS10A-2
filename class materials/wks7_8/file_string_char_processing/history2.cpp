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
    string aword;

    inFile.open("history.d1");
    outFile.open("sujan2.txt");

    //inFile.get(letter); //priming read

    inFile>>aword;

    while(inFile)
    {
     //  cout<<letter;
         cout<<aword;
      // outFile<<letter;
      // inFile.get(letter);
      outFile<<aword;
      inFile>>aword;
}

inFile.close();
outFile.close();
inFile.clear();
outFile.clear();

 //   system("PAUSE");
    return 0;
}



