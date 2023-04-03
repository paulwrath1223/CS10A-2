//******************************************************************
// Prompts program
// This program demonstrates the use of input prompts
//******************************************************************
#include <iostream>
#include <iomanip>    // For setprecision()

using namespace std;

int main()
{
    int   partNumber;
    int   quantity;
    float unitPrice;
    float totalPrice;

    cout << fixed << showpoint            // Set up floating-pt.
         << setprecision(2);              //   output format

    cout << "Enter the part number:" << endl;          // Prompt
    cin >> partNumber;

    cout << "Enter the quantity of this part ordered:" // Prompt
         << endl;
    cin >> quantity;

    cout << "Enter the unit price for this part:"      // Prompt
         << endl;
    cin >> unitPrice;

    totalPrice = quantity * unitPrice;
    cout << "Part " << partNumber                      // Echo print
         << ", quantity " << quantity
         << ", at $ " << unitPrice << " each" << endl;
    cout << "totals $ " << totalPrice << endl;
    return 0;
}
