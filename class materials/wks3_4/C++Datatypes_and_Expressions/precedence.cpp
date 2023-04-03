// Program precedence demonstrates the precedence of operators

#include <iostream>
#include<cmath>
using namespace std;

int main ()
{
    cout << 4 + 3 * 5  << endl;
    cout << (4 + 3) * 5  << endl;
    cout << 4 * 5 % 3 + 2  << endl;
    cout << (4 * (5 / 3) + 2)  << endl;
    
    int y,x=3;
    
  //  y=x*x*x;
    y=int(pow(x,3.0));
    
    cout<<y<<endl;
    
    system("PAUSE");
    return 0;
}


