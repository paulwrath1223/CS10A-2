// Program Lunch writes out the contents of a sandwich.

#include <iostream>
#include <string>
using namespace std;

const string HAM = "ham";
const string CHEESE = "cheese";
const string LETTUCE = "lettuce";
const string BREAD = "bread";

int main()
{
    string filling;
    string sandwich;

    filling = HAM + " and " + CHEESE + " with " + LETTUCE;
    sandwich = filling + " on white " + BREAD + '.';
    cout  << "Filling : "  << filling  << endl;
    cout  << "Sandwich : " << sandwich  << endl;

    return 0;
}
