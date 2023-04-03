/*Given three career options...this program predicts a most likely career 
using random numbers and an if/else if statement.*/

#include <iostream>
#include <string>           // Needed to use strings
#include <cstdlib>          // Needed for random numbers
#nclude <ctime>
using namespace std;

int main()
{ 
	// Strings to hold user entered careers
	string career1, career2, career3;
	char choice; //char used to ask for replay of program
	
	int randomNum;    // Will hold the randomly generated integer
 
	// "Seed" the random generator
	unsigned int seed = time(0);
	srand(seed);
	
	// Explain the game and get the user's career choices
	cout << "Good to see you are running my free career predictor program.\n"
	     << "Please enter 3 careers you would like to have. Example: \n\n"
	     << "      chef \n      astronaut \n      CIA agent \n\n"
		 << "Then I will predict what you will be. \n\n";
 
 do
 {
	cout << "Career choice 1: ";
	cin.ignore(); //needed to flush the buffer and allow for first getline to work for loops
	getline(cin, career1);
	cout << "Career choice 2: ";
	getline(cin, career2);
	cout << "Career choice 3: ";
	getline(cin, career3);

	// Randomly generate an integer between 1 and 4.
	randomNum = 1 + rand() % 4;
	
	// Use branching logic to output the prediction
	if (randomNum == 1)
		cout << "\nYou will be a " << career1 << ". \n";
	else if (randomNum == 2)
		cout << "\nYou will be a " << career2 << ". \n";
	else if (randomNum == 3)
		cout << "\nYou will be a " << career3 << ". \n";
	else 
		cout << "\nSorry. You will not be any of these. \n";
	
	cout<<"Would you like to try this again...please type Y for YES and N for NO"<<endl;
	cin>>choice;
}while(choice=='Y'||choice=='y');
 
        system("PAUSE");
  	return 0;
}
