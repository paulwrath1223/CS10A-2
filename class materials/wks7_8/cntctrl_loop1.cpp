// Program CNTCTRL1 sums a fixed number of integer values.  The sum is printed.

//#include "stdafx.h"
#include <iostream>
using namespace std;

	int main ( )
	{
		int value;
		int sum=0;
		int count = 1;  //loop control variable initialized
     //   cout<<"Enter ten numbers"<<endl;

        //pre-test loop
	/*	while (count <= 10) //loop condition or expression
		{
			cout<<"Enter number: ";
			cin >> value;
			sum = sum +  value;
		    count++; //increment the loop control variable to allow for update condition

		}
		cout << "The sum of the 10 numbers is " <<sum<<endl;

		//pre-test for statement
         sum=0;
		for(int counter=1; counter<=10; counter++)
            {
			cout<<"Enter number: ";
			cin >> value;
			sum = sum +  value;

		}
		cout << "The sum of the 10 numbers is " <<sum<<endl;


		// post-test loop
		count=1;
		sum=0;
		do
        {
            cout<<"Enter number: ";
			cin >> value;
			sum = sum +  value;
		    count++; //increment the loop control variable to allow for update condition
        }while(count <= 10);

        cout << "The sum of the 10 numbers is " <<sum;*/

        cout<<"Enter some numbers (-1 to quit):  "<<endl;
        cin >> value;


        while (value != -1) //loop condition or expression
		{
			sum = sum +  value;
			cout<<"Enter number: ";
			cin >> value;

		//    count++; //increment the loop control variable to allow for update condition

		}
		cout << "The sum of the numbers is " <<sum<<endl;



 //        system("PAUSE");

	return 0;
	}
