// Program Shell1 prints appropriate messages based on a
// grade read from the keyboard.

#include <iostream>
using namespace std;


int main ()
{

    int grade;

    cout  << "Enter an integer grade between 50 and 100."
          << "  Press return. "  << endl;
    cin  >> grade;

    if  (grade>=90 && grade<=100)
        {
        cout  << "Congratulations!"  << endl;
        cout<<"Well done ...set the bar"<<endl;
        }
    if  (grade>=80 && grade<=89)
        cout  << "Try harder"  << endl;
    if  (grade>=70 && grade<=79)
        cout  << "Average"  << endl;
    if  (grade>=60 && grade<=69)
        cout  << "Need help"  << endl;
    if  (grade<=59)
        cout  << "Try again"  << endl;
    
    
    system("PAUSE");
    return 0;
}                           
