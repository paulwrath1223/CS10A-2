// Program HiScore reads and prints three test scores.
// The largest value of the three is printed with an
// appropriate message.
// Assumption:  The scores are unique.

#include <iostream>
using namespace std;

int main ()
{
    int  test1Score;
    int  test2Score;
    int  test3Score;
    int  hiScore=0;

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

 /*   if(test1Score>test2Score)
        hiScore=test1Score;
    if(test1Score>test3Score)
        hiScore=test1Score;
    if(test2Score>hiScore)
        hiScore=test2Score;
    if(test3Score>hiScore)
        hiScore=test3Score;*/



 /*    hiScore=test1Score;

    if(test2Score>hiScore)
        hiScore=test2Score;

    if(test3Score>hiScore)
        hiScore=test3Score;*/




 /*   if(test1Score>test2Score && test1Score>test3Score)
       hiScore=test1Score;
    else if(test2Score>test1Score && test2Score>test3Score)
       hiScore=test2Score;
    else
        hiScore=test3Score;*/




    cout<<"Highest test score is "<<hiScore<<endl;




    return 0;
}
