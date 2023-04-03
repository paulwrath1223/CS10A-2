// Program CNTCTRL1 sums a fixed number of integer values.  The sum is printed.

//#include "stdafx.h"
#include <iostream>
using namespace std;

	int main ( )
	{
		int value;
		int sum = 0;
		int count = 1;
		char choice;

		do{

		/*while (count <= 5)
		{

			cout<<"Input number"<<endl;
			cin >> value;
			sum = sum +  value;
            count++;
		}*/

		for(count = 1;count <= 5; count++)
		{
		    cout<<"Input number"<<endl;
			cin >> value;
			sum = sum +  value;
		}

		cout << "The sum of the 10 numbers is " <<sum<<endl;

		cout<<"Try again, type Y for yes"<<endl;
		cin>>choice;
		count = 1;
		sum =0;

		}while(choice=='Y');
    //     system("PAUSE");

	return 0;
	}
