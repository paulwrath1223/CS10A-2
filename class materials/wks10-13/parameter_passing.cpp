//******************************************************************
// parameter passing with pass-by-value and pass-by-reference
#include <iostream>
using namespace std;

void summing(int,int,int,int&);    //void function prototype
int total(int,int,int);           //value-returning function prototype


int main()
{
    
    int num1,num2,num3;
    int sum=0;
    cout<<"Please enter three numbers"<<endl;
    cin>>num1>>num2>>num3;
    
 
    summing(num1,num2,num3,sum);  //call to a void function sending in one value //void function call with actual arguments
    
    cout << "The sum total of the three values is " << sum<<endl;
    
    cout << "The sum total of the three values is " << total(num1,num2,num3)<<endl;//value-returning function call with actual arguments
     
    return 0;
}

//function definition
void summing(int value1,int value2,int value3, int& finalvalue) //void function heading with formal parameters
{
    int total;
    total= value1+value2+value3;
    finalvalue=total;
         
}

//function definition
int total(int value1,int value2,int value3) //value returning function heading with formal parameters
{
    return value1+value2+value3;
}