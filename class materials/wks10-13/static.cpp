//********************************************************
// This program demonstrates the use of a static variable.
//********************************************************

#include <iostream>
using namespace std;

void counting();
// Function counting prints the value of a counter
// each time it is called.

int main()
{
  for (int count = 1; count <=10; count++)
    counting();
  return 0;
}

void counting()
{
 // static int counter = 0;
   int counter = 0;

  counter++;
  cout << "count: " << counter << endl;
}
