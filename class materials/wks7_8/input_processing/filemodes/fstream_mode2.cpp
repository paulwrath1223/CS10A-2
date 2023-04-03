// This program writes information to a file, closes the file,
// then reopens it and appends more information.
#include <fstream>
using namespace std;

int main()
{
    fstream dataFile; // file object

    // Open a file to write to, and write to it.
    dataFile.open("demofile.txt", ios::out);
    dataFile << "Jones\n";
    dataFile << "Smith\n";

    // Close the file.
    dataFile.close();

    // Open the same file in append mode, and write to it.
    dataFile.open("demofile.txt", ios::out | ios::app);
    dataFile << "Willis\n";
    dataFile << "Davis\n";

    // Close the file.
    dataFile.close();
    return 0;
}