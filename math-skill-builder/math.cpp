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
#include "math-functions.cpp"


//program user interface in main



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


