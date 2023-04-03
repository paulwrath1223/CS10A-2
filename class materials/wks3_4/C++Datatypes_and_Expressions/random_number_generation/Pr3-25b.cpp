// This program (Pr3-25b updtated - Gaddis 10E) simulates rolling dice.
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
   // Constants
   const int MIN = 1;   // Minimum dice value
   const int MAX = 6;   // Maximum dice value


   // Random number engine
    random_device engine;

    //setting seed default random engine with call to time function
    default_random_engine eng{static_cast<long unsigned int>(time(0))};

   // Distribution object
   uniform_int_distribution<int> diceValue(MIN, MAX);

   cout << "Rolling the dice...\n";

   //cout << diceValue(engine) << endl;
   //cout << diceValue(engine) << endl;

    cout << diceValue(eng) << endl;
    cout << diceValue(eng) << endl;

   return 0;
}
