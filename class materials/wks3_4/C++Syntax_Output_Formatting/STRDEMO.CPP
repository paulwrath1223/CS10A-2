// Program StrDemo demonstrates string functions.
#include <iostream>
#include <string>
using namespace std;

const string TITLE = "How much was the doggie in the window?";
const string CAT = "cat";

int main()
{
    cout  << TITLE.length()  << endl;
    cout  << TITLE.find("the")  << endl;
    cout  << TITLE.find(CAT)  << endl;
    cout  << TITLE.substr(17, 6)  << endl;
    cout  << TITLE.substr(17, 23)  << endl;
    cout  << TITLE.substr(17, 23).length()  << endl;

    system("PAUSE");
    return 0;
}
