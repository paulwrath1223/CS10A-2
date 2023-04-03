// Program HiScore reads and prints three test scores.
// The largest value of the three is printed with an
// appropriate message.
// Assumption:  The scores are unique.

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int  test1Score;
    int  test2Score;
    int  test3Score;

    cout  << "Enter score for test 1; press return."  << endl;
    cin  >> test1Score;
    cout  << "Enter score for test 2; press return."  << endl;
    cin  >> test2Score;
    cout  << "Enter score for test 3; press return."  << endl;
    cin  >> test3Score;

    cout  << "The three test scores are: "  << endl;
    cout  << test1Score  << endl;
    cout  << test2Score  << endl;
    cout  << test3Score  << endl;

    /* TO BE FILLED IN */
    if(test1Score>test2Score && test1Score>test3Score)
      cout<<"test1Score is the highest"<<endl;
    if(test2Score>test1Score && test2Score>test3Score)
      cout<<"test2Score is the highest"<<endl;
    if(test3Score>test2Score && test3Score>test1Score)
      cout<<"test3Score is the highest"<<endl;

    system("PAUSE");

    return 0;
}
