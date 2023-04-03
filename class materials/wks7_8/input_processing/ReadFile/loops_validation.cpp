//program demonstrates various types of loop control structures as well as a few error checking and/or data validation routines
//the C++ syntax is correct..however while pasteing the source code into this message board you will
//notice that the HTML interface will strip some of the C++ syntax. 
//The source code is available at http://www.santarosa.edu/~ssarkar/cs10sp10/loops_validation.cpp 

#include<iostream>
using namespace std;

int main()
{ 
  // local variables declared
 int number, sum, count;
 char answer;
 //initial input prompt 
 cout<<"If you provide me with a positive number, my program will sum the values from 1 through that number"<<endl;
 cout<<"Would you like to test my program...please enter Y/N."<<endl;
 
 cin>>answer;
 
 //data processing using various types of nested loops
 while (answer=='Y'||answer=='y') //an event controlled loop... question-type loop
 {
 cout<<"Please enter an integer number"<<endl;
 
while (!( cin>> number)|| number<0) //data validation for negative number and datatype matching  
{ //enter URL and author of code segment
   if ( cin.eof() )
      return false;
    else 
    {
      char ch;
      cin.clear();

     cout<<"Invalid input, please enter a positive number: ";
     while (cin.get ( ch ) && ch != '\n')
      ;
    }
  }
 
count=1;
sum=0;
while (count<=number) //a count-controlled loop
{

sum=sum+count;
count++;
}

//the above while loop can be written as a for statement as shown below...
//for(count=1,sum=0;count<=number;count++)
//sum +=count;

cout<<"The sum is "<<sum<<endl;;  

cout<<"Do you want me test the program again...please enter Y/N."<<endl;;
 cin>>answer;

}
cout<<"ENJOY YOUR DAY"<<endl;;
 system ("PAUSE");
 return 0;  
        
}
