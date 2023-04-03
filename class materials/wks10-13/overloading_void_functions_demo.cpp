//************************************************************************
// This program prints a several messages using overloaded void functions
//************************************************************************
#include <iostream>
using namespace std;

void drawLine();//function prototype
void drawLine(int);//function prototype
void drawLine(int,string&);//function prototype
void drawLine(int,int&);//function prototype

int main()
{
    int lines;
    string words;
    int counter=0;

    drawLine(); //function call
    cout<<"  SPRING IS HERE   "<<endl;

    cout<<"How many lines do you need? ";
    cin>>lines;


    drawLine(lines,words); //function call with arguments
    cout<<endl<<words<<endl;

    drawLine(lines,counter); //function call with arguments
    cout<<"The iteration count in function was "<<counter<<endl;

    return 0;
}
//function definitions

void drawLine()
{
     cout<<"************************"<<endl;
}

void drawLine(int value) //function heading with formal parameeters
{
      for(int count=1;count<=value;count++)
    drawLine();
}

void drawLine(int value,string& slogan) //function heading with formal parameeters
{
     for(int count=1;count<=value;count++)
    drawLine();
    cout<<slogan<<endl<<endl;
    slogan="ALLERGY TIME >>>>THE POLLEN COUNT IS UP....   ";
}

void drawLine(int value,int& iteration) //function heading with formal parameeters
{
   for(int count=1;count<=value;count++)
   {
    iteration++;
    drawLine();
   }
}
