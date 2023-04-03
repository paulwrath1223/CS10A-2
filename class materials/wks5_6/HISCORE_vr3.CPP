// Program HiScore reads and prints three test scores.
// The high, mid and low values of the three scores is printed with an
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
    int high,mid,low;

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
    if(test1Score<test2Score && test2Score<test3Score)
      {
          high=test3Score;
          mid=test2Score;
          low=test1Score;
          cout<<"High:"<<high<<endl;
          cout<<"Mid:"<<mid<<endl;
          cout<<"Low:"<<low<<endl;
      }
      else if (test1Score<test3Score && test3Score<test2Score)
      {
          high=test2Score;
          mid=test3Score;
          low=test1Score;
          cout<<"High:"<<high<<endl;
          cout<<"Mid:"<<mid<<endl;
          cout<<"Low:"<<low<<endl;
      }
      else if (test2Score<test1Score && test1Score<test3Score)
      {
          high=test3Score;
          mid=test1Score;
          low=test2Score;
          cout<<"High:"<<high<<endl;
          cout<<"Mid:"<<mid<<endl;
          cout<<"Low:"<<low<<endl;
      }


    system("PAUSE");

    return 0;
}
