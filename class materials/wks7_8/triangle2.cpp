#include<iostream> //triangle2.cpp
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
        cout<<"Please enter a positive number to be used to generate a triangle."<<endl;
    	cin>>limit;
    }

    cout<<endl;
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

    rowcount=1;
    while(rowcount<=limit)
    {
    	colcount=1;
    	int nlimit=limit-rowcount;
    	while(colcount<=nlimit)
    	{
        	cout<<symbol;
        	colcount++;
    	}
    cout<<endl;
    rowcount++;
    }

    return 0;
}
