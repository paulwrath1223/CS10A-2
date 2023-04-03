#include <iostream> //event_controlled.cpp
using namespace std;

int main ()
{
    int number;
    int nines = 0;
    int counter=1;
    int limit=0;
    int first9=0,last9=0;

    cout<<"How many numbers will be entered?"<<endl;
    cin >> limit; //priming read

   // while (number != -1)

      while(counter<=limit)
    {
        cout<<"Enter num:";
        cin >> number;
        if(number == 9 && first9==0)
        {    first9=counter;
           //  nines++;
        }



        counter++;
    }
    cout << "Of the "<<counter<<" entered there were "<<nines<<" nines"<<endl;
    cout <<"The first nine was found in position: "<<first9<<endl;
	return 0;
}

