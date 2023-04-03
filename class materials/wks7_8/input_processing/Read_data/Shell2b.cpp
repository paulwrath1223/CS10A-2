// Program Shell2b counts the number of lower and uppercase letters
// on a line.

#include <iostream>
using namespace std;


int main ()
{  
    char letter;
    int  letterCt=0;
    
    cout<<"Type in a bunch of characters ending with a period."<<endl;
    cin>>letter;	
    /* TO BE FILLED IN */
    while (letter != '.')
    { 
    	if ((letter >='a' && letter <='z') || (letter >='A' && letter <='Z'))
    		{
    			letterCt++;
    			cin.get(letter);
    		}	
    	else
    		cin.get (letter);
    } 
    cout<<"For the characters entered the number of lower and uppercase letters is "<<letterCt<<endl;
     system("PAUSE");
   
    return 0;
}

