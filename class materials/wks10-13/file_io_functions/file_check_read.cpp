#include<iostream>
#include<fstream>
using namespace std;

void file_check(ifstream&);
void file_readdata(ifstream&);
int main()
{

    ifstream inData;
    string fileName;
    cout<<"Please enter data filename"<<endl;
    cin>>fileName;
    
    inData.open(fileName.c_str());
    file_check(inData);
    file_readdata(inData);
    
    system("PAUSE");
    return 0;
}
    
void file_check(ifstream& someFile)   
{
     string fileName;
     while(!someFile)
    {
       cout<<"File not found"<<endl;
        someFile.clear();
        cout<<"Please enter correct data filename"<<endl;
         cin>>fileName;
         someFile.open(fileName.c_str());  
    }       
}    

void file_readdata(ifstream& someFile) 
{
     int value, min, count=0;
     someFile>>value;
      
     while(someFile)
     {
     cout<<value<<endl;
     count++;
      min=value;              
      someFile>>value; 
      if(value<min)
         min=value;
     
     }
      cout<<"The minimum value of "<<count<< " numbers is "<<min<<endl;
}
