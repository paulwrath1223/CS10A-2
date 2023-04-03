#include<iostream> //triangle1.cpp
using namespace std;

int main()
{

    int limit=5;
    char symbol='x';
    int colcount=1, rowcount=1;
    cout<<"Please enter a positive number to be used to generate a triangle."<<endl;
    cin>>limit;
    while(!cin || limit<0)
    {
        cin.clear();
        cin.ignore(100,'\n');
        cout<<"Please enter a positive number to represent the side of a square."<<endl;
    cin>>limit;

    }

    while(rowcount<=limit)
    {
    colcount=1;
    while(colcount<=rowcount)
    {
        cout<<symbol;
        colcount++;
    }

    cout<<endl;
    rowcount++;
    }


//    system("PAUSE");
    return 0;
}
