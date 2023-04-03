// Program Shell1b prints appropriate messages based on a
// grade read from the keyboard.

#include <iostream>
using namespace std;


int main ()
{

    int grade;
    char letterGrade;

    cout  << "Enter an integer grade between 50 and 100."
          << "  Press return. "  << endl;
    cin  >> grade;

    if  (grade>=90 && grade<=100)
        {
        cout  << "Congratulations!"  << endl;
        letterGrade='A';
        }
    else if  (grade>=80 && grade<=89)
        {
        cout  << "Try harder"  << endl;
        letterGrade='B';
        }
         else if  (grade>=70 && grade<=79)
         {
        cout  << "Average"  << endl;
        letterGrade='C';
          }
              else if  (grade>=60 && grade<=69)
              {

              cout  << "Need help"  << endl;
              letterGrade='D';
              }
                   else if (grade <= 59)
                   {

                   cout  << "Try again"  << endl;
                   letterGrade='F';
                   }
                   else
                   cout << "Faulty data." << endl;
  cout<<"Your letter grade is "<<letterGrade<<endl;

//    system("PAUSE");
    return 0;
}
