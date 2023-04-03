#include <iostream> //least.cpp
using namespace std;

int main ()
{
    int value;
    //int sum = 0;

    int least=0;

    cout<<"Please enter a value (-9 to quit)"<<endl;
    cin >> value; //priming read

    least=value;

    while (value != -9)
    {
        if(value<least)
            least=value;

        cout<<"Please enter a value (-9 to quit)"<<endl;
        cin >> value;
    }
    cout << "The smallest number entered is " <<least<<endl;
	return 0;
}
