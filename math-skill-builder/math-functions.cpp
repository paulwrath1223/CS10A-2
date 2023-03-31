//
// Created by paulw on 3/30/2023.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>


const int PROBSPERSET = 4;            // number of problems in each Math Skill Builder set
const int MIN_NUM = 1, MAX_NUM = 10;  // random number range used for operands and arguments in each problem


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


/**
 *  The programInfo function provides a few details about the math skill builder program,
    the menu driven user interface, the type of skill sets and the problems in each set are
    generated and user response is assessed.
    @pre: none
    @post: Formatted display of program information displayed in console output
 */
void programInfo(){
    std::cout << "                       MATH IS FUN                                            " << std::endl;
    std::cout << "The Math Skill Builder program will assess basic mathematics skills.          " << std::endl;
    std::cout << "Each Math skill builder set generates four problems using randomly            " << std::endl;
    std::cout << "generated numbers in the range of 1 to 10, stored as double values.\n         " << std::endl;
    std::cout << "The randomly generated numbers are to be used as operands or arguments        " << std::endl;
    std::cout << "for the various arithmetic, geometry or other problem types to be generated   " << std::endl;
    std::cout << "in each Math skill builder set. User response to a problem is compared to the " << std::endl;
    std::cout << "correct answer and an appropriate message is displayed.\n                     " << std::endl;
    std::cout << "A menu driven interface provides the user an opportunity to select a specific " << std::endl;
    std::cout << "Math Builder Skill set to try and the program interface design algorithms are " << std::endl;
    std::cout << "built with expandability in mind to allow for (1) additional problem sets or  " << std::endl;
    std::cout << "modules to be added or (2) additional different problem types in each set or  " << std::endl;
    std::cout << "(3) a larger random number range.\n                                           " << std::endl;
    std::cout << "Program Assertions: When comparing two double values with precision (for eg., " << std::endl;
    std::cout << "in comparing user response to the correct answer for a double quotient result " << std::endl;
    std::cout << "or mixed type calculation the user is reminded to provide a response rounded  " << std::endl;
    std::cout << "to two decimal places, as a precision criteria of less than .01 will be used  " << std::endl;
    std::cout << "to determine equality. Expect a few floating point representational errors.   " << std::endl;
}


/**
 *
 *  The mathSkillBuilderMenu function includes a formatted display of 4 menu choices and a
    leading prompt for user input is provided.

    Input validation is included for out of range choice or non alpha character input. With
    an appropriate message and a re-input is allowed. The validated input is passed
    through a reference parameter variable choice to the calling code.
    @pre: none
    @post: Formatted display of program information displayed. A value for reference parameter choice
        has been entered by the user and validated. Range validation (1-4) and a cin fail state will
        allow user to reenter a new value.
    @param choice OUT validated input to prompt
*/
void mathSkillBuilderMenu (/*out*/ int& choice)
{
    std::cout << "        ++++++++++++++++++++++++++++++++++++++++++\n"
                 "        -  MATH SKILL BUILDER SETS - Select one  -\n"
                 "        *        1. BASIC ARITHMETIC             *\n"
                 "        " << char(227) << "        2. BASIC GEOMETRY               " << char(227) << "\n"
                 "        %        3. BASIC STATISTICS             %\n"
                 "        \\        4. EXIT MATH IS FUN             \\\n"
                 "        ++++++++++++++++++++++++++++++++++++++++++" << std::endl;


    std::cout << "\nSELECT A MATH SKILL BUILDER SET OR TYPE 4 TO EXIT: ";
    std::cin >> choice;

    while(choice < 1 || choice > 4 || !std::cin){
        std::cin.clear();
        std::cin.ignore(200,'\n');
        std::cout << "OOPS, Invalid choice? " << std::endl;
        std::cout << "\nSELECT A MATH SKILL BUILDER SET OR TYPE 4 TO EXIT: ";
        std::cin >> choice;
    }
}


/**
 *
 * @pre
 * @post
 * @param correctCount OUT
 */
void arithmeticProbSet (/*out*/ int& correctCount){
    double num1 = 0, num2 = 0, userAnswer = 0, correctAnswer = 0;
    correctCount = 0;
    for(int )
    //algorithm: display four arithmetic problems using calls to generateOperands
    //process the binary operations-store calculated correctAnswer
    //get userResponse-compare answers and display appropriate message
    //increment correctCount if correct user answer
    if (fabs(correctAnswer - userAnswer) < .01)//needed for comparing doubles
    {
        std::cout << "Correct" << std::endl;
        correctCount++;
    } else {
        std::cout << "Incorrect" << std::endl;
    }
}


/**
 *
 * @pre
 * @post
 * @param num1
 * @param num2
 */
void generateOperands (/*out*/ double& num1, /*out*/ double& num2)
{
    num1 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    num2 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    //algorithm: generate two random numbers using the reference parameter.
}