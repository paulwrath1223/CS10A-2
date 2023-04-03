//
// Created by Paul Fornage on 3/29/2023.
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
#include <algorithm>
#include <vector>

// TODO: ask teacherman if I can not use std namespace

//program user interface in main
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
int getNumSets (); // TODO: where does this come in
double getUserInput ();
void checkAnswer(/*in*/ double userAnswer, /*in*/ double correctAnswer, /*out*/ int& correctCount);


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

/**
 *  The programInfo function provides a few details about the math skill builder program,
    the menu driven user interface, the type of skill sets and the problems in each set are
    generated and user response is assessed.
    @pre: program is started
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
 * Generates 'n' sets of 4 questions about basic arithmetic, where 'n' is the parameter 'numProbSets' and tests the user
 * with said problems.
 * @pre User selects 'Arithmetic Problem Set'
 * @post User needs to be shown their results
 * @param numProbSets IN: the number of problem sets to test the user with
 * @param correctCount OUT: gets incremented by 1 for each question answered correctly
 */
void arithmeticProbSet (/*in*/ int numProbSets, /*out*/ int& correctCount){
    double user_answer, correct_answer, num1, num2;
    correctCount = 0;
    for(int i = 0; i < numProbSets; i++){
        std::cout << "Arithmetic Problem Set#" << i+1 << std::endl;
        std::cout << "-------------------------\n";
        generateOperands(num1, num2);
        std::cout << num1 << " + " << num2 << " = ";
        correct_answer = num1 + num2;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\n";
        generateOperands(num1, num2);
        std::cout << num1 << " - " << num2 << " = ";
        correct_answer = num1 - num2;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\n";
        generateOperands(num1, num2);
        std::cout << num1 << " * " << num2 << " = ";
        correct_answer = num1 * num2;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\nType a responses rounded to two decimal places below...\n";
        generateOperands(num1, num2);
        std::cout << num1 << " " << char(246) << " " << num2 << " = ";
        correct_answer = num1 / num2;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
    }
}


/**
 * Generates 'n' sets of 4 questions about basic statistics, where 'n' is the parameter 'numProbSets' and tests the user
 * with said problems.
 * @pre User selects 'Statistics Problem Set'
 * @post User needs to be shown their results
 * @param numProbSets IN: the number of problem sets to test the user with
 * @param correctCount OUT: gets incremented by 1 for each question answered correctly
 */
void statisticsProbSet (/*in*/ int numProbSets, /*out*/ int& correctCount){
    double user_answer, correct_answer, num1, num2, num3;
    correctCount = 0;
    for(int i = 0; i < numProbSets; i++){
        std::cout << "Statistics Problem Set#" << i+1 << std::endl;
        std::cout << "-------------------------\n";
        generateOperands(num1, num2, num3);
        std::cout << "What is the average (mean) of: " << num1 << ", " << num2 << ", " << num3 << "? ";
        correct_answer = (num1 + num2 + num3)/3;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\n";
        generateOperands(num1, num2, num3);
        std::cout << "What is the median of: " << num1 << ", " << num2 << ", " << num3 << "? ";
        double nums[] = {num1, num2, num3};
        std::vector<double> my_vector (nums, nums+3);
        std::sort(my_vector.begin(), my_vector.end());
        correct_answer = my_vector[1];
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\n";
        generateOperands(num1, num2, num3);
        std::cout << "What is the maximum of: " << num1 << ", " << num2 << ", " << num3 << "? ";
        correct_answer = std::max({num1, num2, num3});
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\nType a responses rounded to two decimal places below...\n";
        generateOperands(num1, num2);
        std::cout << "What is the minimum of: " << num1 << ", " << num2 << ", " << num3 << "? ";
        correct_answer = std::min({num1, num2, num3});
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
    }
}


/**
 * Generates 'n' sets of 4 questions about basic geometry, where 'n' is the parameter 'numProbSets' and tests the user
 * with said problems.
 * @pre User selects 'Geometric Problem Set'
 * @post User needs to be shown their results
 * @param numProbSets IN: the number of problem sets to test the user with
 * @param correctCount OUT: gets incremented by 1 for each question answered correctly
 */
void geometryProbSet (/*in*/ int numProbSets, /*out*/ int& correctCount){
    double user_answer, correct_answer, num1, num2, num3;
    correctCount = 0;
    for(int i = 0; i < numProbSets; i++){
        std::cout << "Geometric Problem Set#" << i+1 << std::endl;
        std::cout << "-------------------------\n";
        generateOperands(num1, num2);
        std::cout << "Calculate the area of a Triangle given base and height: Base = " << num1 <<
                  " Height = " << num2 << "\n"
                                          "Area of Triangle is: ";
        correct_answer = num1 * num2 / 2;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\n";
        generateOperands(num1, num2, num3); // TODO: Largest side must be less than the sum of the smaller sides
        std::cout << "Calculate the perimeter of a Triangle with three sides: side1 = " << num1 << ", side2 = " <<
                  num2 << ", side3 = " << num3 << std::endl << "Perimeter of Triangle is: ";
        correct_answer = num1 + num2 + num3;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\n";
        generateOperands(num1, num2);
        std::cout << "Calculate the perimeter of a Rectangle : Length = " << num1 <<" and Width = " << num2 << std::endl <<
                  "Perimeter of Rectangle is: ";
        correct_answer = (num1 + num2) * 2;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
        std::cout << "-------------------------\nType a responses rounded to two decimal places below...\n";
        generateOperands(num1);
        std::cout << "Calculate the area of a Circle given radius: Radius = " << num1 << " and Pi(" << char(227) <<
                  ") is 3.1415927\nType a response rounded to two decimal places below...\n"
                  "Area of Circle is: ";
        correct_answer = num1 * num1 * M_PI;
        user_answer = getUserInput();
        checkAnswer(user_answer, correct_answer, correctCount);
    }
}


/**
 * Generates a semi-random integer (although stored in double form) from 1-10 inclusive
 * @param num1 OUT: the variable to set to the random number
 */
void generateOperands (/*out*/ double& num1)
{
    num1 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    //algorithm: generate two random numbers using the reference parameter.
}


/**
 * Generates 2 semi-random integers (although stored in double form) from 1-10 inclusive
 * @param num1 OUT: the first variable to set to the random number
 * @param num2 OUT: the second variable to set to the random number
 */
void generateOperands (/*out*/ double& num1, /*out*/ double& num2)
{
    num1 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    num2 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    //algorithm: generate two random numbers using the reference parameter.
}


/**
 * Generates 3 semi-random integers (although stored in double form) from 1-10 inclusive
 * @param num1 OUT: the first variable to set to the random number
 * @param num2 OUT: the second variable to set to the random number
 * @param num3 OUT: the second variable to set to the random number
 */
void generateOperands (/*out*/ double& num1, /*out*/ double& num2, /*out*/ double& num3)
{
    num1 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    num2 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    num3 = static_cast<double>(rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM);
    //algorithm: generate two random numbers using the reference parameter.
}

/**
 * Gets a double from the console input, will continue to ask until a double (or int) is provided
 * @return a double that the user inputs
 */
double getUserInput (){
    double user_input;
    std::cin >> user_input;
    while(!std::cin){
        std::cin.clear();
        std::cin.ignore(200,'\n');
        std::cout << "OOPS, Invalid choice? " << std::endl;
        std::cin >> user_input;
    }
    return user_input;
}


/**
 * increments 'correctCount' if 'userAnswer' and 'correctAnswer' are less than 0.01 away from each other
 *
 * @param userAnswer IN the user input to check against the correct answer
 * @param correctAnswer IN the correct answer to check against the user input
 * @param correctCount OUT gets incremented if 'userAnswer' and 'correctAnswer' are less than 0.01 away from each other
 */
void checkAnswer(/*in*/ double userAnswer, /*in*/ double correctAnswer, /*out*/ int& correctCount){
    if (fabs(correctAnswer - userAnswer) < .01)//needed for comparing doubles
    {
        std::cout << "Correct" << std::endl;
        correctCount++;
    } else {
        std::cout << "Incorrect. Correct answer displayed with precision of .01 = " <<
                  std::fixed << std::setprecision(2) << correctAnswer << std::endl;
    }
}


/**
 * asks the user how many sets they want to practice and calls the problem set function that corresponds to the
 * users choice of skill builder mode
 *
 * @param choice IN the mode of the skill builder that the user selected
 * @param numProbSets OUT the number of sets the user wants to practice
 * @param numCorrect OUT gets incremented for every correct answer
 */
void processProbSets (/*in*/ int choice, /*out*/ int& numProbSets, /*out*/ int& numCorrect)
{
    switch(choice){
        case(1):
            std::cout << "-------------------------------------------------------------------------------------\n"
                         "\n"
                         "MATH BUILDER SKILL SET#1 selected. This skill set contains a series of " << PROBSPERSET <<
                      " problems in the set.\n"
                      "\n"
                      "How many times you wish to attempt this current set (enter 1-5) : "; // TODO: use int getNumSets ();

            std::cin >> numProbSets;

            while(numProbSets > 5 || numProbSets < 1 || !std::cin){
                std::cin.clear();
                std::cin.ignore(200,'\n');
                std::cout << "OOPS, Invalid choice? " << std::endl;
                std::cin >> numProbSets;
            }

            std::cout << "\n Arithmetic skill sets";
            arithmeticProbSet(numProbSets, numCorrect);
            break;
        case(2):
            std::cout << "-------------------------------------------------------------------------------------\n"
                         "\n"
                         "MATH BUILDER SKILL SET#2 selected. This skill set contains a series of " << PROBSPERSET <<
                      " problems in the set.\n"
                      "\n"
                      "How many times you wish to attempt this current set (enter 1-5) : ";

            std::cin >> numProbSets;

            while(numProbSets > 5 || numProbSets < 1 || !std::cin){
                std::cin.clear();
                std::cin.ignore(200,'\n');
                std::cout << "OOPS, Invalid choice? " << std::endl;
                std::cin >> numProbSets;
            }

            std::cout << "\n Geometry skill sets";
            geometryProbSet(numProbSets, numCorrect);
            break;
        case(3):
            std::cout << "-------------------------------------------------------------------------------------\n"
                         "\n"
                         "MATH BUILDER SKILL SET#3 selected. This skill set contains a series of " << PROBSPERSET <<
                      " problems in the set.\n"
                      "\n"
                      "How many times you wish to attempt this current set (enter 1-5) : ";

            std::cin >> numProbSets;

            while(numProbSets > 5 || numProbSets < 1 || !std::cin){
                std::cin.clear();
                std::cin.ignore(200,'\n');
                std::cout << "OOPS, Invalid choice? " << std::endl;
                std::cin >> numProbSets;
            }

            std::cout << "\n Business statistics skill sets";
            statisticsProbSet(numProbSets, numCorrect);
            break;
        default:
            std::cout << "processProbSets called with invalid \'choice\'";
    }
}


/**
 * Prints a summary of all problems the user answered this session, including how many questions they answered,
 * how many of those were correct, and the percent correct
 *
 * @param choice IN the mode of skill builder the user selected
 * @param numProbSets IN the number of sets they trained on
 * @param numCorrect IN the number of questions they got right
 */
void printReport (/*in*/ int choice,/*in*/ int numProbSets,/*in*/ int numCorrect)
{
    std::cout << "=================================================================\n";

    switch(choice){
        case(1):
            std::cout << "Basic Arithmetic Skill Set";
            break;
        case(2):
            std::cout << "Basic Geometry Skill Set";
            break;
        case(3):
            std::cout << "Basic Statistics Skill Set";
            break;
        default:
            std::cout << "printReport called with invalid \'choice\'";
    }

    std::cout << ": You got " << numCorrect <<
              " correct out of " << numProbSets*PROBSPERSET << " for " <<
              (100 * numCorrect)/(numProbSets*PROBSPERSET) << "%\n";
    std::cout << "=================================================================\n";
}

