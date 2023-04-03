// Program Shell2c_updated counts the number of lower and uppercase letters
// on a line in a file. Also includes reading a line from a file and storing
//it into a string variable

#include <iostream>
#include<fstream>
using namespace std;


int main ()
{
    char letter;
    int  letterCt=0;
    ifstream inData;
    string myString;

    inData.open("mydata.txt");


    //cout<<"Type in a bunch of characters ending with a period."<<endl;
  //  cin>>letter;	/* TO BE FILLED IN */

     getline(inData,myString); //reading the first line in the file

     inData>>letter;	//reads the first character in the second line - priming read

     /* TO BE FILLED IN */

    while (letter != '\n')
    {
    	if (letter >='A' && letter <='Z')
    		{
    			letterCt++;
    			inData.get(letter);
    		}
    	else
    		inData.get (letter);
    }
    cout<<"For the characters entered the number of uppercase letters is "<<letterCt<<endl;
    cout<<myString<<endl;


//    system("PAUSE");
    return 0;
}

