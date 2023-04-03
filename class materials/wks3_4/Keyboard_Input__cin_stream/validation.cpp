//various input stream validation routines
#include<iostream>
using namespace std;

int main()
{

  int value1,value2;
  cout<<"Enter two numbers "<<endl;

  cout<<"Number#1: ";
  cin>>value1;
 // cout<<char(cin.peek())<<endl;
 // cout<<char(cin.get())<<endl;
 // while(cin.fail()&& cin.peek()=='.')
   // while(char(cin.peek())=='.'|| !cin)
    while(char(cin.get())=='.'|| !cin)
 //   if(cin.fail())
  {
      cin.clear();
      cin.ignore(256,'\n');
      value1=0;
      cout<<"Invalid input, please retypes"<<endl;
      cout<<"Number#1: ";
      cin>>value1;
  }
  cout<<"Number#2: ";
  cin>>value2;
  while(cin.fail())
  {
      cin.clear();
      cin.ignore(256,'\n');
      cout<<"Invalid input, please retype"<<endl;
      cout<<"Number#2: ";
      cin>>value2;
  }

  cout<<value1<<endl;
  cout<<value2<<endl;
  return 0;

}
