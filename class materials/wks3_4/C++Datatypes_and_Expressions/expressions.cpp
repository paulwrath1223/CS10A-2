// Program expressions demonstrates arithmetic expressions

#include <iostream>
#include <iomanip>    // For setw() and setprecision()
#include<cstdlib>

using namespace std;

int main()
{

    int i = 4;
    int j = 17;
    float z = 2.6;

    cout << fixed << showpoint;              // Set up floating pt.
                                             //   output format

    cout <<"Variables declared and assigned below"<<endl;
    cout << "int i = 4;";
    cout << "int j = 17;";
    cout <<"float z = 2.6;"<<endl<<endl;

	cout<<"Testing various arithmetic expressions"<<endl;
    cout << "i/ float (j)= "<< i/ float (j) <<endl;
    cout << "1.0 / i +2 = "<< 1.0 / i +2 <<endl;
    cout << "z * j = "<< z * j <<endl;
    cout << "i + j % i = "<< i + j % i <<endl;
    cout << "(1/2)*i = "<< (1/2)*i <<endl;
    cout << "2*i+j-1 = "<< 2*i+j-1 <<endl;
    cout << "j/2 = "<< j/2 <<endl;
    cout << "2*3-1%3 = "<< 2*3-1%3 <<endl;
    cout << "i % j/i = "<< i % j/i <<endl;
    cout << "int(z + 0.5) = "<< int(z + 0.5) <<endl;

    system("PAUSE");
    return 0;
}

