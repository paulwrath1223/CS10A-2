// Program keyboard_input demonstrates various types of input statements
// to test copy sections into seperate programs

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout  << fixed  << showpoint;

    int val1, val2, val3, val4;	// declares 4 variables
                                 //missing statement ??
    cin >> val1 >> val2 >> val3 >> val4;	// inputs 4 values
    cout  << val4  << endl;
    cout  << val3  << endl;
    cout  << val2  << endl;
    cout  << val1  << endl;	// outputs 4 values

    char  character1, character2, character3, character4;

    cout  << "Input four characters.  Press Return."  << endl;
    cin  >> character1  >> character2  >> character3  >> character4;
    cout  << character1  << character2  << character3  << character4<<endl;

    //cin.get
    cout  << "Input four characters again.  Press Return."  << endl;
    cin.get(character1);
    cin.get(character2);
    cin.get(character3);
    cin.get(character4);
    cout  << character1  << character2  << character3  << character4<<endl;

    cout << "This program has paused. Press Enter to continue.\n";
    cin.get();  //to pause processing
    cin.clear();//to clear the input stream buffer

   //mixing cin>> and cin.get
   char somecharacter;    //define a character variable
   int number;            //define an integer variable

   cout<<"Enter a number: ";
   cin>>number;             //read an integer
   cin.get();               //read the next character in the stream
   cout<<"Enter character: ";
   somecharacter=cin.get(); //read a character
   cout<<number<<" "<<somecharacter<<endl;
   cout<<"Thank You!\n\n";

   //using cin.ignore  ....forms cin.ignore(), cin.ignore(20,'\n') ...cin.ignore(n,c)

    cout<<"Enter a number: ";
   cin>>number;             //read an integer
   cin.ignore();            //Skip the newline character
   cout<<"Enter character: ";
   cin.get(somecharacter) ; //read a character
   cout<<number<<" "<<somecharacter<<endl;
   cout<<"Thank You!\n";

   cin.ignore();    //Skip the newline character

   //getline
    string name;
    string city;

    cout << "Please enter your name: ";
    getline(cin, name);
    cout << "Enter the city you live in: ";
    getline(cin, city);

    cout << "Hello, " << name << endl;
    cout << "You live in " << city << endl;
    return 0;
}



