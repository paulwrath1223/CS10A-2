//******************************************************************
// parameter passing with pass-by-value and pass-by-reference 
//with keyboard input and file open/read-input

#include <iostream>
#include<fstream>

using namespace std;

void summing(int,int,int,int&);           //void function prototype
void summing2(int&);           //void function prototype


int main()
{
    
    int num1,num2,num3;
    int sum=0;
 
   cout<<"Please enter three numbers"<<endl;
    cin>>num1>>num2>>num3;
 
 
  summing(num1,num2,num3,sum);  //call to a void function sending in three values and sending one value out
  cout << "The sum total of the three values is " << sum<<endl;
    
    summing2(sum); 
    cout << "The sum total of the three values is " << sum<<endl;
     
    system("PAUSE");
    return 0;
}

void summing(int value1,int value2,int value3, int& finalvalue)
{
    int total;
    total= value1+value2+value3;
    finalvalue=total;
         
}

void summing2(int& total)
{
      int num1,num2,num3;
     ifstream inFile;
    inFile.open("forsum.txt");

    inFile>>num1>>num2>>num3;
      total= num1+num2+num3;
}
