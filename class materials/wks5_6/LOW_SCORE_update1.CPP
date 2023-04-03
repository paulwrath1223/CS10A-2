/*Program LowScore reads data from user input (cin - keyboard object) and prints three test scores.
The lowest value of the three is printed with an appropriate message.
Assumption:  YOu are to create a data file with three scores and that the three scores are unique.*/
#include <iostream>
using namespace std;
int main ()
{
    int  test1Score;
    int  test2Score;
    int  test3Score;
    int lowScore = 1000; //set to a large number
    int midScore, highScore;

    cout  << "Enter score for test 1; press return." << endl;
    cin  >> test1Score;
    cout  << "Enter score for test 2; press return."  << endl;
    cin  >> test2Score;
    cout  << "Enter score for test 3; press return."  << endl;
    cin  >> test3Score;

    cout  << "The three test scores are: "  << endl;
    cout  << test1Score  << endl;
    cout  << test2Score  << endl;
    cout  << test3Score  << endl;
    /*WRITE RELATIONAL AND/OR LOGICAL EXPRESSIONS IE., IF-THEN-ELSE STATEMENTS TO DETERMINE LOWEST SCORE*/

    //using multiple if statements
/*    if(test1Score<test2Score)
        lowScore = test1Score;
    if(test1Score<test3Score)
        lowScore = test1Score;
    if(test2Score<lowScore)
        lowScore = test2Score;
    if(test3Score<lowScore)
        lowScore = test3Score;*/

/*    lowScore = test1Score;

    if(test2Score<lowScore)
        lowScore = test2Score;
    if(test3Score<lowScore)
        lowScore=test3Score;*/

 //using if else and an if statement
/*    if(test1Score < test2Score)
        lowScore = test1Score;
      else
        lowScore = test2Score;
      if(test3Score < lowScore)
        lowScore = test3Score;
*/
  //using logical expressions
/*    if(test1Score < test2Score && test1Score < test3Score)
        lowScore = test1Score;
    else if(test2Score < test1Score && test2Score < test3Score)
        lowScore = test2Score;
    else
        lowScore = test3Score;
*/
    //program output of lowest Score
    cout << "The low score is: " << lowScore << endl;
    return 0;
}
