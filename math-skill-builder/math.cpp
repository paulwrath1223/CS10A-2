//
// Created by paulw on 3/29/2023.
//

/*Functional decomposition Phase#5 - Math Skill Builder program
Setup in main to test drive the Math Skill Builder program.
A sampling of function prototypes grouped by program user interface
in main, generateOperands overloaded function used to generate random numbers,
and various modules to process Math Skill Builder sets
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>


//program user interface in main
void programInfo();
void mathSkillBuilderMenu (/*out*/ int& choice);
void processProbSets (/*in*/ int choice, /*out*/ int& numProbSets, /*out*/ int& numCorrect);
void printReport (/*in*/ int choice,/*in*/ int numProbSets,/*in*/ int numCorrect);

//overloaded functions accessed by Math Builder Skill set modules for random number generation
void generateOperands (/*out*/ double& num1);
void generateOperands (/*out*/ double& num1, /*out*/ double& num2);
void generateOperands (/*out*/ double& num1, /*out*/double& num2,/*out*/double& num3);

//various modules to process Math Builder Skill sets
void arithmeticProbSet (/*in*/ int numProbSets, /*out*/ int& correctCount);
void geometryProbSet (/*in*/ int numProbSets, /*out*/ int& correctCount);
void statisticsProbSet (/*in*/ int numProbSets, /*out */ int& correctCount);//for extra credit only
int getNumSets ();
double getUserInput ();
void checkAnswer(/*in*/ double userAnswer, /*in*/ double correctAnswer, /*out*/ int& correctCount);

//global constants
const int PROBSPERSET = 4;            // number of problems in each Math Skill Builder set
const int MIN_NUM = 1, MAX_NUM = 10;  // random number range used for operands and arguments in each problem
const double PI = 3.141593;           // geometry problems

int main()
{
    std::cout << std::showpoint << std::fixed << std::setprecision(2); // formatted number display
    srand(time(nullptr));                               // seed the random number generator

    int choice = 0, numProbSets = 0, numCorrect = 0;

    programInfo();
    mathSkillBuilderMenu (choice);

    while (choice!=4){
        processProbSets (choice,numProbSets,numCorrect);
        printReport (choice,numProbSets,numCorrect);
        mathSkillBuilderMenu (choice);
    }

    std::cout << "\n\nNow exiting MATH SKILL BUILDER program ...." << std::endl;

    return 0;
}