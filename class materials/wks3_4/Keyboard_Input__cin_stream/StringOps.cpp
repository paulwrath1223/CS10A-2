//******************************************************************
// SubstrOps.cpp program demonstrates find and substr operations
//******************************************************************
#include <iostream>
#include <string>     // For substr type

using namespace std;

int main()
{
  string name = "Olivia Johnson Peterson";
  int index;
  index = name.find(' ');
  cout<<name.find(' ')<<endl;
  cout << "First Name: " << name.substr(0, index) << endl;
  name = name.substr(index+1, name.length()-1);
  index = name.find(' ');
  cout << "Middle Name: " << name.substr(0, index) << endl;
  name = name.substr(index+1, name.length()-1);
  cout << "Last Name: " << name;
  return 0;
}
