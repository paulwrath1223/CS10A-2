// Program seuss prints out quotations from Dr. Seuss's Horton Hatches the Egg.


#include <iostream>
#include <string>
#include <cstdlib>      //wxDev-C++ users may need this header file here to allow calls to system commands

using namespace std;

int main()
{
    cout << "***************************** "<<endl;
    cout << "*  I meant what I said      * "<<endl;
    cout << "*  And I said what I meant  * "<<endl;
    cout << "*  An elephant's faithful   * "<<endl;
    cout << "*  One hundred percent      * "<<endl;
    cout << "***************************** "<<endl;

    system ("PAUSE"); //if using wxDev-C++ or MS Visual C++...not needed in Code::Blocks or XCode

    return 0;
}


