// Program Shell2 counts the number of uppercase letters on a line.
// The line must end with a period

#include <iostream>
using namespace std;


int main ()
{
    char letter;
    int  letterCt=0;

    cout<<"Type in a bunch of characters ending with a period."<<endl;
    cin>>letter;

    while (letter != '.') /* TO BE FILLED IN */
    {
    	                     /* TO BE FILLED IN */
        letterCt++;
        cin>>letter; //next character read from keyboard buffer

    }
    cout<<"For the characters entered the number of uppercase letters is " <<letterCt<<endl;

    return 0;
}
