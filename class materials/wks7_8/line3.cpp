#include <iostream>

using namespace std;

int main()
{

    int wcount=0, width=5;
    int hcount=0,height=8;

    cout<<"Please enter height and width for the rectangle"<<endl;
    cin>>width>>height;

    while(hcount<=height)
    {
     //   cout<<hcount<<endl;
        if(hcount==0 || hcount== height)
        {

            while(wcount<=width)
            {
            cout<<'x';
            wcount++;
            }
        }
        else
        {
            cout<<'x';
            while(wcount<=width-2)
            {
            cout<<" ";
            wcount++;
            }
            cout<<'x';


        }
       // }


    cout<<'\n';
    wcount=0;
    hcount++;
    }

 //   cout<<"\n\n\n";
 /*   int height2=8,line=5;
    for(int rowcount=1;rowcount<=height2;rowcount++){
        for(int colcount=0;colcount<=line;colcount++)
    cout<<'x';

      cout<<'\n';}*/

//    system("PAUSE");
    return 0;

}
