#include <iostream>
using namespace std;

int main()
{

    int wcount=0, width=5;
    int hcount=0,height=8;

    //generates rows and is also the controlling loop
    while(hcount<height)
    {
        //inner loop generates a single line
        while(wcount<=width)
        {
        cout<<'x';
        wcount++;
        }

    cout<<'\n';
    wcount=0;
    hcount++;
    }

    cout<<"\n\n\n";
    int height2=8,line=5;
    for(int rowcount=1;rowcount<=height2;rowcount++){
        for(int colcount=0;colcount<=line;colcount++)
    cout<<'x';

      cout<<'\n';}

//    system("PAUSE");
    return 0;

}
