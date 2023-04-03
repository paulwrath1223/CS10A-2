//function_declaration_definition.cpp
#include<iostream>
using namespace std;

int function(/*in*/int); //a value returning function prototype (aka. function declaration)with formal parameters
void anotherfunction(/*inout*/int&); //a non value returning function prototype (aka. function declaration)with formal parameters

int main()
{
    int number=10; //a local variable

    cout<<"The local variable number in main contains "<<number<<endl;

    cout<<"The value returned in main after a call to int function "<<function(number)<<'\n'; //a value returning function call with actual argument passed into the function

    anotherfunction(number); //a call to a non value returning function (aka. void function)with actual argument passed into the function
    //*note the statement by itself above ..what was processed

    cout<<"The local variable number in main contains "<<number<<endl;//what caused number to change here

    return 0;

}

//value return function defined with formal parameters...note dataflow comments
int function(/*in*/int someValue)
{
someValue=someValue+100;
return someValue; //computer value returned to calling function

}
//non value returning function defined (aka. void function)with formal...note dataflow comments
void anotherfunction(/*inout*/int& someValue)
{
int newValue=someValue+200;
someValue=newValue*2;
cout<<"The local variable newValue in anotherFunction contains "<<newValue<<endl;
//return someValue;

}
