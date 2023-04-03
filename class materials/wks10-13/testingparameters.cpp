/* Write a main function with three integer variables declared and appropriate input prompts
    to receive three input values from the keyboard.  Write a function prototype (i.e. declaration)
    and a function definition for FindMinimum (a void function), that takes as input three integers
    and outputs the minimum value to the display screen. The main function should make a function call to FindMinimum,
    send three values to the function in order to display the minimum value.
    The program also includes other forms of input of numbers that are processed using various overloaded functions
    Study the setup of the various functions, ie., prototype, function definition and function calls made in main
*/
#include<iostream>
#include<fstream>
using namespace std;

//function prototypes - overloading functions example
void findMinimum(/*in*/int,/*in*/ int,/*in*/ int); //void function prototype with three int parameters
void findMinimum(/*in*/int,/*in*/ int,/*in*/ int,/*out*/ int&); //void function prototype with three int parameters
void findMinimum(); //void function - parameterless
void findMinimum(/*inout*/ifstream&); //void function prototype with one ifstream parameter (passed by reference)
int findMin(/*in*/int,/*in*/ int,/*in*/ int); // a value returning function prototype returns an int

int main()
{
  //declare variables
  int num1=0, num2=0,num3=0, minNum, number;
  ifstream inFile;


  //prompt for input ..use leading prompts where possible
  cout << "Enter three numbers and and AI will determine the smallest number input\n";
  cin >> num1 >>num2 >>num3;

  while(!cin) //check state of input stream
  {
      cin.clear();
      cin.ignore(100, '\n');

      cout <<"Invalid data, please retype. "<< endl;
      cout << "Enter three numbers and AI will determine the smallest number input\n";
      cin >> num1 >>num2 >>num3;

  }

   //function calls with actual arguments
    findMinimum(num1, num2, num3);
    findMinimum(num1, num2, num3, minNum);

     //display minimum value
     cout << "\nAfter a call to the findMinimum function with a reference parameter, the updated minimum value is: " << minNum << endl;

    findMinimum();
    findMinimum(inFile);

    //display minimum value calling a value returning function
    cout << "The minimum value returned from a value returning function call is: " << findMin(num1, num2, num3) << endl; //


  return 0;
}

//function description with pre/post conditions - not written
void findMinimum(/*in*/int num1,/*in*/ int num2,/*in*/ int  num3)
{
    int minNum; //local variables in function
   //process for minimum value
    if(num1<num2 && num1<num3)
        minNum = num1;
    else if(num2<num1 && num2<num3)
        minNum = num2;
    else
        minNum = num3;

  //display minimum value
  cout << "The minimum value is: " << minNum << endl;
}



//function description with pre/post conditions - not written
void findMinimum(/*in*/int num1,/*in*/ int num2,/*in*/ int  num3,/*out*/ int& minNum)
{
   //process for minimum value
    if(num1<num2 && num1<num3)
        minNum = num1;
    else if(num2<num1 && num2<num3)
        minNum = num2;
    else
        minNum = num3;
}


//function description with pre/post conditions - not written
int findMin(/*in*/int num1,/*in*/ int num2,/*in*/ int  num3)
{
    int minNum; //local variables in function
   //process for minimum value
    if(num1<num2 && num1<num3)
        minNum = num1;
    else if(num2<num1 && num2<num3)
        minNum = num2;
    else
        minNum = num3;
 //value returning function must return a value of the data type in the function heading
  return minNum;
}


//function description with post conditions - not written
void findMinimum()
{
   int number, minNum; //local variables in function

   cout << "\nInput a few numbers and AI will determine the smallest number input, do not forget to enter -1 to quit\n";
   cin >> number;
   minNum = number;

   while(number != -1) //an event controlled loop
      {
          //cout << number << endl;
             if(number<minNum)
             minNum = number;
         //    cout <<minMin<< endl;
             cin >> number;
      }
      cout << "The minimum value is: " <<minNum <<endl;
}


//function description with pre/post conditions - not written
void findMinimum(/*inout*/ifstream& inFile)
{
      int num, minValue;
      inFile.open("numbers.txt");

      inFile >> num;  //a priming read
      minValue = num;
      cout << "\nFile data content displayed below.....\n";
      while(inFile)
      {
             cout << num << endl;
             if(num<minValue)
             minValue = num;
             //cout <<minValue << endl;
             inFile >> num;
      }
      cout << "The minimum value is: " <<minValue <<endl;
}
/*
create a data file with a sample set of numbers
40 30 20 67 33 45
*/


/* parking a set of algorithms written in main.......
  //process for minimum value
  if(num1<num2 && num1<num3)
    minNum = num1;
  else if(num2<num1 && num2<num3)
    minNum = num2;
 else
    minNum = num3;

  //display minimum value
  cout << "The minimum value is: " << minNum << endl;
*/

 /*  cout << "\nInput a few numbers and AI will determine the smallest number input, do not forget to enter -1 to quit\n";
   cin >> number;
   minNum = number;

   while(number != -1) //an event controlled loop
      {
          //cout << number << endl;
             if(number<minNum)
             minNum = number;
         //    cout <<minMin<< endl;
             cin >> number;
      }
      cout << "The minimum value is: " <<minNum <<endl;
*/
