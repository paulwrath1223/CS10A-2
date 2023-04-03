// This program (righttrig.cpp) will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.


#include <iostream>
#include <cmath>	// needed for math functions like sqrt()
using namespace std;

int main()
{
	float a, b;	// the smaller two sides of the triangle
	float hyp;	// the hypotenuse calculated by the program

	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

	// Fill in the assignment statement that determines the hypotenuse

	cout << "The sides of the right triangle are " << a << " and " << b << endl;

	cout << "The hypotenuse is " << hyp << endl;

	return 0;
}

/*program updates
(1) Open the program righttrig.cpp from the demo_ch3 folder. Refer Converting Algebraic Expressions to C plus plus code.docx provides the formula for finding the hypotenus
How can this be implemented in C++?
Hint: You will use two pre-defined math functions (one of them twice) listed in the above document. One of them will be “inside” the other.

algebriac formula converted to C++ numeric expression = sqrt(pow(a,2) + pow(b,2));


Fill in the missing statement so that the following sample run is implemented:
Please input the value of the two sides
9 3
The sides of the rightangled triangle are 9 and 3
The hypotenous is 9.49

Note: This is not a trivial change. You must include another directive as well as use the formatted features discussed in chapter 3.
Notice that the change is made only to the value of the hypotenuse and not to the values of 9 and 3.

(2) Display the program output using fixed point notation with two decimal place output for the display of hypotenous. Hint: Make sure to add #include<iomanip> and program statement such as
cout << fixed << showpoint << setprecision(2);

*/
