// This program demonstrates the use of characters and strings

// PLACE YOUR NAME HERE

#include <iostream>
#include <string>
using namespace std;

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle";	// use double quotes for strings 
const char BESTRATING = 'A';			// use single quotes for characters

int main()
{
	char rating;			// 2nd highest product rating
	string favoriteSnack;		// most preferred snack
	int numberOfPeople;		// the number of people in the survey
	int topChoiceTotal;		// the number of people who prefer the top choice

	// Fill in the code to do the following:
	// Assign the value of "crackers" to favoriteSnack
	// Assign a grade of 'B' to rating
	// Assign the number 250 to the numberOfPeople
	// Assign the number 148 to the topChoiceTotal

	// Fill in the blanks of the following:
	cout << "The preferred soda is " << << endl; 
	cout << "The preferred snack is " << << endl; 
	cout << "Out of " << << " people "<< << " chose these items!" << endl;
	cout << "Each of these products were given a rating of " << ;
	cout << " from our expert tasters" << endl;
	cout << "The other products were rated no higher than a " << rating << endl;

	return 0;
}

/*Program updates

Retrieve program stringchar.cpp from the democh2 folder. This program illustrates the use of characters and strings. 
The char data type allows only one character to be stored in its memory location. 

The string data type (actually a class and not a true data type built into the language) allows a sequence of characters to be stored in one memory location.

Fill in the indicated code, then compile and run the program.

Continue to work on the program until you have no syntax, run-time, or logic errors.

The output should look similar to the following: 

The preferred soda is Dr. Dolittle
The preferred snack is crackers
Out of 250 people 148 chose these items!
Each of these products were given a rating of A from our expert tasters
The other products were rated no higher than a B

Is it possible to change the choice of FAVORITESODA by adding code within the main module of the program? Why or why not?

Is it possible to change the choice of favoriteSnack by adding code within the program? Why or why not?