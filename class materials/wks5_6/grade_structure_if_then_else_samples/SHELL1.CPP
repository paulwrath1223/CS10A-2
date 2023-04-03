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
        cout<<"Your letter grade is an A"<<endl;
    }
    else
        cout<<"INCORRECT raw SCORE"<<endl;
    return 0;
}
