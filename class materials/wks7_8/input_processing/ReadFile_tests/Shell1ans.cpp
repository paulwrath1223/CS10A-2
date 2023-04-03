// Program Shell1ans counts the number of uppercase letters on a line.
// The line must end with a period

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
    	if (letter >='A' && letter <='Z')
    		{
    			letterCt++;
    			cin.get(letter);
    		}
    	else
    		cin.get (letter);
    }
    cout<<"For the characters entered the number of uppercase letters is "<<letterCt<<endl;
//    system("PAUSE");

    return 0;
}

