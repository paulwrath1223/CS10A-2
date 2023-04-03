#include <iostream> //least.cpp
using namespace std;

int main ()
{
    int value;
    //int sum = 0;

    int least=0,greatest=0,counter=0;

    cout<<"Please enter a value (-9 to quit)"<<endl;
    cin >> value; //priming read

    greatest=least=value;

    while (value != -9)
    {
        if(value<least)
            least=value;
        if(value>greatest)
            greatest=value;

        cout<<"Please enter a value (-9 to quit)"<<endl;
        cin >> value;
        counter++;
    }
    cout << "The smallest number entered is " <<least<<endl;
     cout << "The largest number entered is " <<greatest<<endl;
     cout<<"counter is "<<counter<<endl;
	return 0;
}
