#include <iostream>
using namespace std;

int main(){
	char f1;
	int numeric;
	cout << "Give character: ";
	cin >> f1;
	cout << "Its ascii value is: " << (int)f1 << endl;
	cout << "Give a number to convert to ascii: ";
	cin >> numeric;
	cout << "The ascii value of " << numeric << " is " << (char)numeric<<endl;
	system("PAUSE");
	return 0;
}
