#include <iostream>
using namespace std;

int main()
{
 
  //int value; //to test with an int
  float value; //to test with a float
  
  cout<<"Please enter an integer value"<<endl;
  cin>>value;

  while (cin.fail()) {
    cout<<"You entered an invalid data type for a value"<<endl;
    cout<<"Please enter another value"<<endl;
    
    cin.clear();
    cin.ignore(100,'\n');
    cin >> value;
    
}

cout<<"The value of " <<value<<" is the correct type"<<endl;
system("PAUSE");
return 0;

}
   
