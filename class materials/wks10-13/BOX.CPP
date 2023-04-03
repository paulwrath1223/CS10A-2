// Program Box writes a box using periods.
#include <iostream>
#include <iomanip>
using namespace std;

void WriteBox(); //function prototype (aka. a declaration)
// Post: Writes a box (20 x 4) of dots on the screen.


int main()
{
    cout << "A box: " << endl;

    WriteBox(); //function call
   

    cout << "Box has been drawn." << endl;
//system("PAUSE");
    return 0;
}
//***function definition******************
void WriteBox()  // name of the action
// Post: A box (20 x 4) is printed using periods.

{                         			 // begin action
  cout << "...................." << endl;
  cout << "." << setw(19)  << "."  << endl;
  cout << "." << setw(19)  << "."  << endl;
  cout << "...................." << endl;
}						// end action
