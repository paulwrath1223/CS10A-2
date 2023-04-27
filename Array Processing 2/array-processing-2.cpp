//Student_Name & detailed description and purpose of program
/*The partial program framework below is provided as an initial set-up guide to begin writing your own function procedures to process array data. On the other hand you may find it more rewarding if you design, develop and implement your own program structure, program flow with functional decomposition. Either way, remember that the requirement is that I see well-documented separate function procedures that are called when menu options 1-5 are selected and that the function algorithms process the 2-D array data correctly. */

#include <iostream>
#include <cstdlib>
using namespace std;

const int NUM_REVIEWERS = 4;   //Number of rows in reviews array
const int NUM_MOVIES = 6;      //Number of columns in reviews array

/*Here are few sample function prototypes you may write function definitions for or create your own*/

void initialRatings(int [][NUM_MOVIES]);	    //Set 2-D array data elements to the sample ratings
void getNewRatings(int [][NUM_MOVIES]);		    //Get new reviewer rating values into the 2-D array
void displayRatings(const int [][NUM_MOVIES]);      //Display current values in the 2-D array
void showAverageRatings(const int [][NUM_MOVIES]);  //Calculate average for each column in the 2-D array
void showReviewersHighestRating(const int [][NUM_MOVIES], int); //Highest value in a row in the 2-D array

int main()
{
 // Variable declarations
 int someArray[NUM_REVIEWERS][NUM_MOVIES];  // Ratings for reviewers
 int choice;

 initialRatings(someArray); //call function or declare an array with an initialization list

    do{
         //program interface with menu options
	cout << "---------------------------------------------------" << endl;
	cout << "2-D ARRAY PROCESSING MENU OPTIONS" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "1. Display current movie ratings" << endl;
	cout << "2. Show the average rating for each movie." << endl;
	cout << "3. Show a reviewers highest rated movie/s. (enter reviewer# 1-4)" << endl;
	cout << "4. Show a movies lowest rating. (enter movie# 100-105)" << endl;
	cout << "5. Enter new ratings (1-5) for movie# 100-105 for four reviewers" << endl;
	cout << "6. Quit program"<< endl;
	cout << endl << "Enter your choice:";
 	cin >> choice;

        //include validation routine to check data input
	    switch (choice)
	    {
              //calls to various functions in each case

	    }
    }while(choice != 6);

 return 0;
}
