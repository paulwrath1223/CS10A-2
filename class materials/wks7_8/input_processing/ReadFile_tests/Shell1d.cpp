// Program Shell1d reads a line of text from a file and stores
//it into a string variable. The program also counts the number of uppercase letters 
//and digits in the remaining lines to the end of file. 

#include <iostream>
#include<fstream>

using namespace std;


int main ()
{  
    ifstream finput;
    string line;
    char letter;
    int  letterCt=0;
    int digitCt=0;
    finput.open("textin.txt");
    
 //   cout<<"Type in a bunch of characters ending with a period."<<endl;
 //   cin>>letter;	/* TO BE FILLED IN */
    getline(finput,line); //reading the first line in the file
    cout<<line<<endl;
    
 //   finput.close();
 //   finput.open("textin.txt");
    
    finput>>letter; //reads the first character in the second line - priming read
    //while (letter != '\n')
    while (finput)//end of file controlled loop
    { 
    	if(isdigit(letter))//call to function to check for digit see Appendix C pg.1014
    	{
          digitCt++;
          finput.get(letter);
          }
        if (letter >='A' && letter <='Z')
    		{
    			letterCt++;
    			finput.get(letter);
    		}	
    	else
    		finput.get (letter);
    } 
    cout<<"For the characters entered the number of uppercase letters is "<<letterCt<<endl;
    cout<<"For the characters entered the number of digits is "<<digitCt<<endl;

    system("PAUSE");
    return 0;
}

