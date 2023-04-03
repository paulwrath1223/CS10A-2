// Program type_conversion demonstrates type coercion (implicit conversion) and type casting (explicit type converion)
// showing both functional notation and keyword notation ...see CHapter 7 pg. 320

#include <iostream>
#include <iomanip>    // For setw() and setprecision()

using namespace std;

int main()
{

    float someFloat = 12.0;
    float anotherFloat = 5.5;
    int someInt = 4;

    cout << fixed << showpoint;              	// Set up floating pt. output format

    someFloat = 3 * someInt + 2;		//type coercion ...implicit
    cout << someFloat <<endl;

 // someFloat = float (3*someInt + 2);			//explicit type casting or conversion ...functional notation
    someFloat = static_cast<float>(3*someInt + 2);	//explicit type casting or conversion ...keyword notation
    cout << someFloat <<endl;

    someInt = 5.2 /someFloat - anotherFloat;	//type coercion ...implicit
    cout <<someInt <<endl;


    someInt = int(5.2 /someFloat - anotherFloat); 		//explicit type casting or conversion ...functional notation
    someInt =  static_cast<int>(5.2 /someFloat - anotherFloat); //explicit type casting or conversion ...keyword notation
    cout <<someInt <<endl;

//    system("PAUSE");


    return 0;
}

