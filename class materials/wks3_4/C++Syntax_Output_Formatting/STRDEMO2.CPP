// Program StrDemo demonstrates string functions.
#include <iostream>
#include <string>
using namespace std;

const string TITLE = "How much was the doggie in the window?";
const string CAT = "cat";

int main()
{
    string sentence, first, middle, last;
    int index1,index2;
    cout  << TITLE.length()  << endl;
    cout  << TITLE.find("the")  << endl;
    cout  << TITLE.find(CAT)  << endl;
    cout  << TITLE.substr(17, 6)  << endl;
    cout  << TITLE.substr(17, 23)  << endl;
    cout  << TITLE.substr(17, 23).length()  << endl;

    cout<<"Please type in a sentence and ue the enter key to end"<<endl;
    //cin>>sentence;
    getline(cin,sentence);

    cout<<"\nYou typed in the following sentence\n"<<endl;
    cout<<sentence<<endl;
    cout<<sentence.length()<<endl;
    cout<<sentence.find(' ')<<endl;
    index1=sentence.find(' ');
    first=sentence.substr(0,index1);
    cout<<first<<endl;
    middle=sentence.substr(index1+1,sentence.length());
    cout<<middle<<endl;
    index1=middle.find(' ');
    middle=middle.substr(0,index1);
    cout<<middle<<endl;
    index2=sentence.find(' ');
    cout<<index1<<" "<<index2<<endl;



//    system("PAUSE");
    return 0;
}
