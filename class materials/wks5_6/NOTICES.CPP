//******************************************************************
// Notices program
// This program determines (1) a student's average based on three
// test scores and (2) the student's passing/failing status
//******************************************************************
#include <iostream>
#include <iomanip>    // For setprecision()

using namespace std;

int main()
{
    float average;        // Average of three test scores
    long  studentID;      // Student's identification number
    int   test1;          // Score for first test
    int   test2;          // Score for second test
    int   test3;          // Score for third test
    bool  dataOK;         // True if data is correct

    cout << fixed << showpoint;              // Set up floating pt.
                                             //   output format
    // Get data

    cout << "Enter a Student ID number and three test scores:"
         << endl;
    cin >> studentID >> test1 >> test2 >> test3;
    cout << "Student number: " << studentID << "  Test Scores: "
         << test1 << ", " << test2 << ", " << test3 << endl;

    // Test data

    if (test1 < 0 || test2 < 0 || test3 < 0)
        dataOK = false;
    else
        dataOK = true;

    if (dataOK)
    {
        // Calculate average

        average = float(test1 + test2 + test3) / 3.0;

        // Print message

        cout << "Average score is "
             << setprecision(2) << average << "--";
        if (average >= 60.0)
        {
            cout << "Passing";                 // Student is passing
            if (average < 70.0)
                cout << " but marginal";       // But marginal
            cout << '.' << endl;
        }
        else                                   // Student is failing
            cout << "Failing." << endl;
    }
    else                                       // Invalid data
        cout << "Invalid Data:  Score(s) less than zero." << endl;
    system ("PAUSE");
    return 0;
}
