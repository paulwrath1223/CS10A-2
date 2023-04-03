// Program type_conversion demonstrates type coercion (implicit conversion) and type casting (explicit type converion

#include <iostream>
#include <iomanip>    // For setw() and setprecision()

using namespace std;

int main()
{
    
    float someFloat = 12.0;
    float anotherFloat = 5.5;
    int someInt = 4;
    
    cout << fixed << showpoint;              // Set up floating pt. output format
    
    someFloat = 3 * someInt + 2;		//type coercion
    cout << someFloat <<endl;
    someFloat = float (3*someInt + 2);	//type casting or conversion
    cout << someFloat <<endl;
    
    someInt = 5.2 /someFloat - anotherFloat;	  //type coercion 
    cout <<someInt <<endl;
    someInt = int(5.2 /someFloat - anotherFloat); //type casting or conversion
    cout <<someInt <<endl;
    system("PAUSE");

    
    return 0;
}

