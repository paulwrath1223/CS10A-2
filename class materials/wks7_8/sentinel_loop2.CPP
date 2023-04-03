#include <iostream> //sentinel_loop2.cpp
using namespace std;

int main ()
{
    int value;
    int sum = 0;

    cout<<"Please enter a value (-9 to quit)"<<endl;
    cin >> value; //priming read

    while (value != -9)
    {
        sum = sum +  value;
        cout<<"Please enter a value (-9 to quit)"<<endl;
        cin >> value;
    }
    cout << "The sum of the values prior to a negative value is " <<sum ;
	return 0;
}

