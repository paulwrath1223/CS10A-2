// More Conditional statements
#include <iostream>
using namespace std;

int main()
{
 char letterGrade;

 cout << "What grade did you earn in CS10 - Introduction to Programming?" << endl;
 cin >> letterGrade;

 switch( letterGrade ) // This is where the switch statement begins
 {
         case 'A':cout << "an A - excellent work!" << endl;
              break;
         case 'B':cout << "you got a B - good job" << endl;
              break;
         case 'C':cout << "earning a C is satisfactory" << endl;
              break;
         case 'D':cout << "while D is passing, there is a problem" << endl;
              break;
         case 'F':cout << "you failed - better luck next time" << endl;
              break;
         default:cout << "You did not enter an A, B, C, D, or F" << endl;
 }

// system("PAUSE");
 return 0;
}
