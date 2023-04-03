#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    
  ifstream inData;
  string fileName;
  int limit;
  int counter=1;
  int sum=0;
  int value;
  

    
    cout<<"Please enter the name of your datafile"<<endl;
    cin>>fileName;
    
    inData.open(fileName.c_str());
    
    while(!inData)
    {
      cout<<"Data file not found"<<endl;
      
     // inData.close();
      inData.clear();
      cout<<"Please enter correct filename"<<endl;
      cin>>fileName;
      inData.open(fileName.c_str());
     }
     
     inData>>value;
     
     while(!inData.eof())
     {
       cout<<value<<" "<<counter<<endl;
       sum=sum+value;
       inData>>value;
       counter++;
     }
     
     cout<<"The sum of " <<counter<<" values in the file is  "<<sum<<endl;    
    
       
    system("PAUSE");
    return 0;
}

