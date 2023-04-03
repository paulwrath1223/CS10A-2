#include<iostream>

using namespace std;

int main()
{
    
    int value;
    int sum=0;
    
    cout<<"Please enter numbers and I will sum only the positive numbers. Type -1 to quit"<<endl;
    cin>>value;
    
    
    while(value != -1)
    { 
      if(value>=0)
      sum=sum+value;
      cout<<"Please enter another number or type -1 to quit"<<endl;
      cin>>value;
     }
    
    cout<<"The sum of the numbers entered is "<<sum<<endl;    
    
    
    
    system("PAUSE");
    return 0;
}
