// Program Loops demonstrates various looping structures.
#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    ifstream  inData;
    int  value;
    string someword;
    inData.open("words.txt");
     if(!inData)
     {
         cout<<"file not found"<<endl;
     }
// while loop
    {
        int  counter = 1;
        int  sum = 0;
        while (inData)
        {
            inData  >> someword;
            cout<<someword<<endl;
            sum = sum + value;
            counter++;
        }
        cout  << sum  << endl;
        cout<<counter<<endl;
    }
// do-while loop
  /*  {
        int  counter = 1;
        int  sum = 0;
        do
        {
            inData  >> value;
            sum = sum + value;
            counter++;
         } while (counter <= 4);
         cout  << sum  << endl;
    }
// for loop
    {
        int  sum = 0;
        for (int counter = 1; counter <= 4; counter++)
        {
            inData  >> value;
            sum = sum + value;
        }
         cout  << sum  << endl;
    }
 //   system("PAUSE");*/
    return 0;
}

