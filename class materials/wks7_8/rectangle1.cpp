#include <iostream>

using namespace std;

int main()
{
    //declare variables

    int columns=13; //width of a row
    int colCount=0;
    int rows=20;
    int rowCount=0;
    char symbol='X';

    //prompt for user input
    cout<<"Enter width (a non negative number not to exceed 10), height and a character to generate a rectangle"<<endl;
    cin>>columns>>rows>>symbol;

    if(columns<0 || columns >10)
    {
        cout<<"Data is out of range"<<endl;
        return 1;
    }

    else
    {

        //gernerates rows
        while (rowCount<rows)
        {
            //loop to generate a single row
            while(colCount<columns)
            {
                cout<<symbol;
                colCount++;
        }
            cout<<endl;

            colCount=0;
        rowCount++;

        }
    }

    return 0;
}
