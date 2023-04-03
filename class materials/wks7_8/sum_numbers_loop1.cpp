#include <iostream>
using namespace std;

int main()
{
    
  int limit;
  int counter=1;
  int sum=0;
  

    
    cout<<"Please enter a positive integer value"<<endl;
    cin>>limit;
    
    if(limit>0)
    {
        while(counter<=limit)
        {
          sum=sum+counter;
          counter++;
          }
         cout<<"The sum of values from 1 to  "<<limit<<" is "<<sum<<endl;       
    }
    else
       cout<<"Not a positive integer ....GOODBYE"<<endl; 
    system("PAUSE");
    return 0;
}
