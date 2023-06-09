/*
    Created by Paul Fornage on 3/29/2023.
    CS10A
    Project 1: Functional Decomposition


    Functional decomposition Phase#3 - Rocket Build program
    User input of four specific rocket module specifications
    data items. Setup for another sample rocket build....
    A sampling of function prototypes for a possible
    attempt at functional decomposition of the rocket build.

    prints a rocket according to some user input
*/

#include <iostream>

#define FULL_SQUARE "* "
#define EMPTY_SQUARE "  "
#define MIN_MODULE_WIDTH 10
#define MAX_MODULE_WIDTH 15
#define MIN_MODULE_HEIGHT 5
#define MAX_MODULE_HEIGHT 10
#define MIN_MODULES 2
#define MAX_MODULES 5

using namespace std;

void printRectangle(int, int, bool);
void printTriangle(int, bool);
void drawRocketBoosters(int);
void drawRocket(int, int, int, bool);
void getRocketSpecs(int&, int&, int&, bool&);
void programInfo();


int main() {
    int rocket_width = 0;
    int rocket_height = 0;
    int payloads = 0;
    bool payload_filled;
    char choice = ' ';

    programInfo();

    do{


        getRocketSpecs(rocket_width, rocket_height, payloads, payload_filled);
        drawRocket(rocket_width, rocket_height, payloads, payload_filled);

        cout << "\n\n---------------------------------------------------------" << endl;
        cout << " Try the ROCKET BUILD pattern generating algorithms again?"    << endl;
        cout << "---------------------------------------------------------"     << endl;
        cout << "Type 'Y' for yes or 'N' for no: ";
        cin >> choice;

    }while(choice == 'Y'|| choice == 'y');

    cout << "\nNow exiting the ROCKET BUILD program ...." << endl;
    return 0;
}


/**
 * prints a rectangle
 * @param x width of rectangle
 * @param y height of rectangle
 * @param filled determines if the interior of the rectangle filled
 */
void printRectangle(/*in*/int x, /*in*/int y, /*in*/bool filled){
    for(int y_index = 0; y_index < y; y_index++){
        for(int x_index = 0; x_index < x; x_index++){
            if (!filled &&
                y_index != 0 && y_index != y-1 &&
                x_index != 0 && x_index != x-1) {
                cout << EMPTY_SQUARE;
            } else {
                cout << FULL_SQUARE;
            }
        }
        cout << endl;
    }
}


/**
 * prints an equilateral triangle with a right angle and the longest side horizontal on a grid
 * @param base the length of the base of the triangle
 * @param filled should the triangle be filled in? do to quirk in instructions, if this is false,
 *               only the two points closest to the corners of the triangle are printed
 */
void printTriangle(/*in*/int base, /*in*/bool filled) {
    for(int i = 0; i<base/2 + base%2; i++){
        for(int j = 0; j<base; j++){
            if((filled && (j>=base/2-i-(base%2==0) && j<=base/2+i)) ||
              (!filled && (j==base/2-i-(base%2==0) || j==base/2+i))){
                cout << FULL_SQUARE;
            }
            else {
                cout << EMPTY_SQUARE;
            }
        }
        cout << endl;
    }
}


/**
 * prints n empty squares
 * @param n the number of empty squares to print
 */
void printEmptySquares(/*in*/int n){
    for(int i = 0; i < n; i++){
        cout << EMPTY_SQUARE;
    }
}


/**
 * draws the rockets booster, offset to be centered at the base of the rockey as best as possible
 * @param base the width of the rocket,
 * used to determine how many spaces to put on the left margin before the booster itself
 */
void drawRocketBoosters(/*in*/int base){
    int offset = (base - MIN_MODULE_WIDTH)/2;

    printEmptySquares(offset);
    cout << EMPTY_SQUARE << EMPTY_SQUARE << FULL_SQUARE << EMPTY_SQUARE << EMPTY_SQUARE << EMPTY_SQUARE <<
                EMPTY_SQUARE << FULL_SQUARE << endl;

    printEmptySquares(offset);
    cout << EMPTY_SQUARE << FULL_SQUARE << FULL_SQUARE << FULL_SQUARE << EMPTY_SQUARE << EMPTY_SQUARE <<
                FULL_SQUARE << FULL_SQUARE << FULL_SQUARE << endl;

    printEmptySquares(offset);
    cout << FULL_SQUARE << EMPTY_SQUARE << EMPTY_SQUARE << EMPTY_SQUARE << FULL_SQUARE << FULL_SQUARE <<
                EMPTY_SQUARE << EMPTY_SQUARE << EMPTY_SQUARE << FULL_SQUARE << endl;

}


/**
 * prints this thing? I'm not sure if I understand the directions
 */
void programInfo()  // TODO: ask teacherman what this should be
{
    //algorithm to be determined
    cout << "*************************************************************************\n";
    cout << "                                ROCKET BUILD\n";
    cout << "                         pattern generating algorithms\n";
    cout << "*************************************************************************\n";
}


/**
 * sets the value of all parameters according to user input
 * @param rocket_width Rocket module width
 * @param moduleHeight Rocket module height
 * @param numModules number of rocket body payload modules to dock together
 * @param payload_filled true if the payload modules should be full
 */
void getRocketSpecs (/*inout*/ int &rocket_width, /*inout*/ int &moduleHeight,  /*inout*/ int &numModules, /*inout*/ bool &payload_filled) // TODO: ask teacherman if these are really inout
{
    rocket_width = 0;
    cout << "Dimension#1: Enter Rocket module width (a number between 10-15): ";
    cin >> rocket_width;
    while(rocket_width > MAX_MODULE_WIDTH || rocket_width < MIN_MODULE_WIDTH){
        cout << "Try again\n";
        cout << "Dimension#1: Enter Rocket module width (a number between 10-15): ";
        cin >> rocket_width;
    }
    cout << endl;

    moduleHeight = 0;
    cout << "Dimension#2: Enter Rocket module height (a number between 5-10): ";
    cin >> moduleHeight;
    while(moduleHeight > MAX_MODULE_HEIGHT || moduleHeight < MIN_MODULE_HEIGHT){
        cout << "Try again\n";
        cout << "Dimension#2: Enter Rocket module height (a number between 5-10): ";
        cin >> moduleHeight;
    }
    cout << endl;

    numModules = 0;
    cout << "Rocket payload: Enter number of rocket body payload modules to dock together (a number between 2-5): ";
    cin >> numModules;
    while(numModules>MAX_MODULES || numModules<MIN_MODULES){
        cout << "Try again\n";
        cout << "Rocket payload: Enter number of rocket body payload modules to dock together (a number between 2-5): ";
        cin >> numModules;
    }
    cout << endl;

    char body_type = ' ';
    cout << "Rocket Body: Enter empty or filled cargo space or payload type in module/s (E - empty or F - filled): ";
    cin >> body_type;
    while(!(body_type=='F' || body_type=='E' || body_type=='f' || body_type=='e')){
        cout << "Try again\n";
        cout << "Rocket Body: Enter empty or filled cargo space or payload type in module/s (E - empty or F - filled): ";
        cin >> body_type;
    }
    cout << endl;
    payload_filled = body_type=='F' || body_type=='f';
}


/**
 *  draws a rocket using the parameters
 * @param rocket_width the width of the rocket at it's widest point
 * @param module_height the height of each module on the rocket
 * @param payloads the number of payloads on the rocket
 * @param payload_filled whether or not the payloads should be filled. they will be filled when this parameter is true,
 *                       and empty when it is false. the nosecone will invert this,
 *                       being full when this parameter is false and vice versa
 */
void drawRocket(/*in*/int rocket_width, /*in*/int module_height, /*in*/int payloads, /*in*/bool payload_filled){
    printTriangle(rocket_width, !payload_filled);
    for(int i = 0; i<payloads; i++){
        printRectangle(rocket_width, module_height, payload_filled);
    }
    drawRocketBoosters(rocket_width);
}


