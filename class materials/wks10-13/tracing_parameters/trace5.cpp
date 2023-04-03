#include <iostream>
using namespace std;

void x(int tic);

int toe;

int main()
{
	int tic, tac;
	tic = 1; tac = 2; toe = 3;
	cout << tic << " " << tac << " " << toe << endl;
	x(tic);
	cout << tic << " " << tac << " " << toe << endl;
	x(tac);
	cout << tic << " " << tac << " " << toe << endl;
	x(toe);
	cout << tic << " " << tac << " " << toe << endl;
	return 0;
}

void x(int tic)
{
	int tac;
	
	cout << tic << " " << tac << " " << toe << endl;
	tic = 4; tac = 5; toe = 6;
	cout << tic << " " << tac << " " << toe << endl;
}