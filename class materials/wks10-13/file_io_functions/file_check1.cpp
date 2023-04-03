#include<iostream>
#include<fstream>
using namespace std;

void file_check(ifstream&);
int main()
{

    ifstream inData;
    string fileName;
    cout<<"Please enter data filename"<<endl;
    cin>>fileName;
    
    inData.open(fileName.c_str());
    file_check(inData);
    
 /*   while(!inData)
    {
       cout<<"File not found"<<endl;
        inData.clear();
        cout<<"Please enter correct data filename"<<endl;
         cin>>fileName;
         inData.open(fileName.c_str());
  
    }*/
    
    
    
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
