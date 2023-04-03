// Program functionsgroupwork.cpp is a test interface and is all about functions....Add data flow and other function related comments
#include <iostream>
#include<ctime>
#include<cstdlib>
#include <fstream>
using namespace std;

// function prototypes with parameters
void add(/*in*/int,/*in*/int,/*out*/int&);
int sum(/*in*/int,/*in*/int);
int  Minimum(/*in*/int,/*in*/int);
void showOutput(/*in*/int,/*in*/int);	

int main()
{
    int  one=12;
    int  two=13;
    int  three;
    int choice;
    char doAgain;
    srand(time(0));

    do
    {
    cout<<"Please select a number from the following menu"<<endl;
    cout<<"1. Keyboard input"<<endl;
    cout<<"2. File input"<<endl;
    cout<<"3. Random Numbers"<<endl;
    cout<<"4. Quit program"<<endl;

    cin>>choice;

    switch(choice)
    {
      case 1: keyboard_Input();
              showOutput(one,two);
              break;
      case 2: file_Input();
              showOutput(one,two);
              break;
      case 3: random_Numbers();
              showOutput(one,two);
              break;
      case 4: cout<<"GOODBYE"<<endl;
              exit(1);
              break;
      default:cout<<"INVALID DATA"<<endl;
      //        system("PAUSE");
              return 1;
    }

    cout<<"Would you like to choose another menu item...type Y for YES or N for NO"<<endl;
    cin>>doAgain;
    system("CLS");
    }while (doAgain=='Y' || doAgain =='y');

    return 0;
}


//******function definitions with parameters*************

void add(/*in*/int,/*in*/int,/*out*/int&)
{
	//your code here
}
int sum(/*in*/int,/*in*/int)
{
	//your code here
}

// Post: Returns minimum of three distinct int values.
 int Minimum(/*in*/int,/*in*/int,/*int*/int)
{
	//your code here
}


//******function definition without parameters*************
//describe what the function does
//precondition:
//postcondition:
void showOutput(/*in*/int first,/*in*/ int second)
{
	cout<<"Number#1 :"<<first<<endl;
	cout<<"Number#2 :"<<second<<endl;
}
void keyboard_Input()
{
	//your code here
}

void file_Input()
{
	//your code here
}

void random_Numbers()
{
	//your code here
}
