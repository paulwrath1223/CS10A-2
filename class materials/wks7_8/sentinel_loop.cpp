#include <iostream> //sentinel_loop.cpp
using namespace std;

	int main ( )
	{
		int value;
		int sum = 0;
		cin >> value;

		//Set moreData to true if the first data item is not
		//negative; false otherwise.

		int moreData = value >=0;

		while (moreData)
		{
			sum = sum +  value;
			cin >> value;
			moreData = value >=0; //Reset moreData
		}
		cout << "The sum of the values prior to a negative value is " <<sum ;
//         system("PAUSE");
	return 0;
	}

