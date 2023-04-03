#include <iostream>
using namespace std;

void drawHorizontalLine(int);	//these two lines are
void drawVerticalLines();	//called "prototypes"

int main()
{
   int width=11;
   drawHorizontalLine(width);  	//these three lines are
   drawVerticalLines();		//"function calls"
   drawHorizontalLine(width);
//   system("PAUSE");
}

void drawHorizontalLine(int x)	//this is a "function definition"
{
	int count;
	for(count = 1; count <=x; count++)
	{
		cout <<"X";
	}
	cout <<endl;
}

void drawVerticalLines()       	//this is another "function definition"
{
	int rowCount;
	int spaceCount;

	for (rowCount = 1; rowCount <=3; rowCount++)
	{
		cout <<"X";
		for(spaceCount = 1; spaceCount <=9; spaceCount++)
		{
			cout <<" ";
		}
		cout <<"X"<<endl;
	}
}
