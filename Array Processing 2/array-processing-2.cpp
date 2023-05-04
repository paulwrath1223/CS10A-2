//Student_Name & detailed description and purpose of program
/*The partial program framework below is provided as an initial set-up guide to begin writing your own function procedures to process array data. On the other hand you may find it more rewarding if you design, develop and implement your own program structure, program flow with functional decomposition. Either way, remember that the requirement is that I see well-documented separate function procedures that are called when menu options 1-5 are selected and that the function algorithms process the 2-D array data correctly. */

#include <iostream>
#include <iomanip>
//#include <cstdlib>


#define NUM_REVIEWERS 4   //Number of rows in reviews array
#define NUM_MOVIES 6     //Number of columns in reviews array
//#define DEFAULT_SCORE 5   // not used but left in case the program should be able to recompile with different NUM_REVIEWERS
                            // and NUM_MOVIES values

using namespace std;


int get_user_int(int, int);
void initialRatings(int (&rating_array)[NUM_REVIEWERS][NUM_MOVIES]);	    //Set 2-D array data elements to the sample ratings
void getNewRatings(int (&rating_array)[NUM_REVIEWERS][NUM_MOVIES]);		    //Get new reviewer rating values into the 2-D array
void displayRatings(const int [NUM_REVIEWERS][NUM_MOVIES]);      //Display current values in the 2-D array
void showAverageRatings(const int [NUM_REVIEWERS][NUM_MOVIES]);  //Calculate average for each column in the 2-D array
void showReviewersHighestRating(const int [NUM_REVIEWERS][NUM_MOVIES]); //Highest value in a row in the 2-D array
void showMoviesLowestRating(const int [NUM_REVIEWERS][NUM_MOVIES]);

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

 	choice = get_user_int(1, 6);

	    switch (choice)
	    {
            case 1:
                displayRatings(someArray);
                break;
            case 2:
                showAverageRatings(someArray);
                break;
            case 3:
                showReviewersHighestRating(someArray);
                break;
            case 4:
                showMoviesLowestRating(someArray);
                break;
            case 5:
                getNewRatings(someArray);
                break;
            case 6:
                cout << "Array processing test now concluded. Exiting program .....";
                break;
            default:
                cout << "One cannot comprehend how things have gotten so messed up as to execute this line of code.";
                choice = 6; // stops the program

	    }
    }while(choice != 6);

 return 0;
}

/**
 * @param max_acceptable the upper bound for valid input, inclusive
 * @param min_acceptable the lower bound for valid input, inclusive
 * @pre program needs integer input from user
 * @post program gets integer input from user between 'min_acceptable' and 'max_acceptable' inclusive
 * Gets a valid integer input from user between 'min_acceptable' and 'max_acceptable' inclusive.
 * Will continue to ask until valid input is given
 */
int get_user_int(int min_acceptable, int max_acceptable){
    int user_input;
    cin >> user_input;
    while(!cin || user_input < min_acceptable || user_input > max_acceptable){
        cin.clear();
        cin.ignore(200,'\n');
        cout << "OOPS, Invalid input. Try again" << endl;
        cin >> user_input;
    }
    return user_input;
}

void initialRatings(int (&rating_array)[NUM_REVIEWERS][NUM_MOVIES]){
//    bool expected_dims = ((NUM_REVIEWERS == 4) && (NUM_MOVIES == 6));
    int temp_rating_array[4][6] = {{3, 1, 5, 2, 1, 5},
                                   {4, 2, 1, 4, 2, 4},
                                   {3, 1, 2, 4, 4, 1},
                                   {5, 1, 4, 2, 4, 2}};
//    if(!expected_dims){
//        cout << "initialRatings is only has sample data for 4 reviewers and 6 movies, "
//                "but the program is currently configured to use " << NUM_REVIEWERS << " reviewers and "
//                << NUM_MOVIES << " movies. Values will be initialized to " << DEFAULT_SCORE;
//    }
    for(int i = 0; i < NUM_REVIEWERS; i++){
        for(int j = 0; j < NUM_MOVIES; j++){
//            if(expected_dims){
            rating_array[i][j] = temp_rating_array[i][j];
//            } else {
//                rating_array[i][j] = DEFAULT_SCORE;
//            }
        }
    }
}

void getNewRatings(int (&rating_array)[NUM_REVIEWERS][NUM_MOVIES]){
    cout << "********DATA ENTRY FOR NEW MOVIE RATINGS ***********\n";
    for(int i = 0; i < NUM_REVIEWERS; i++) {
        cout << "****************************************************\n"
                "REVIEWER# " << i+1 << ":\n"
                "****************************************************\n";
        for (int j = 0; j < NUM_MOVIES; j++) {
            cout << "Enter rating (1-5) for movie#" << j+100 << ":\t";
            rating_array[i][j] = get_user_int(1, 5);

        }
    }
}

void displayRatings(const int (rating_array)[NUM_REVIEWERS][NUM_MOVIES]){
    cout << "********************* MOVIE RATINGS ****************\n"
            "REVIEWER|  MV#100 MV#101 MV#102 MV#103 MV#104 MV#105\n"
            "****************************************************\n";
    for(int i = 0; i < NUM_REVIEWERS; i++) {
        cout << "  #" << i+1 << "   ";
        for (int j = 0; j < NUM_MOVIES; j++) {
            cout << "      " << rating_array[i][j];
        }
        cout << endl;
    }
}

void showAverageRatings(const int (rating_array)[NUM_REVIEWERS][NUM_MOVIES]){
    displayRatings(rating_array);
    int sums[NUM_MOVIES] = {0};
    for(int i = 0; i < NUM_REVIEWERS; i++){
        for(int j = 0; j < NUM_MOVIES; j++) {
            sums[j] += rating_array[i][j];
        }
    }
    cout << "\n****************************************************\n"
            "Average Rating for each movie:\n";
    for(int i = 0; i < NUM_MOVIES; i++){
        cout << "Movie#" << i+100 << ": " << fixed << setprecision(2) << sums[i]/static_cast<double>(NUM_REVIEWERS) << endl;
    }
}

void showReviewersHighestRating(const int (rating_array)[NUM_REVIEWERS][NUM_MOVIES]){
    displayRatings(rating_array);
    cout << "\nEnter a reviewer number (1-" << NUM_REVIEWERS << "), to find the Movie they rated the highest:";
    int reviewer_number = get_user_int(1, NUM_REVIEWERS);
    int highest_score = 0;
    int num_high_score = 0;
    for(int i = 0; i < NUM_MOVIES; i++){
        if(rating_array[reviewer_number-1][i] > highest_score) {
            highest_score = rating_array[reviewer_number-1][i];
            num_high_score = 1;
        } else if(rating_array[reviewer_number-1][i] == highest_score){
            num_high_score += 1;
        }
    }
    cout << "\nReviewer#" << reviewer_number << " rated Movie";
    if(num_high_score > 1){
        cout << "s";
    }
    cout << " #";

    for(int i = 0; i < NUM_MOVIES; i++){
        if(rating_array[reviewer_number-1][i] == highest_score) {
            switch(num_high_score)
            {
                case 2:
                    cout << i+100 << " and ";
                    break;
                case 1:
                    cout << i+100;
                    break;
                default:
                    cout << i+100 << ", ";
                    break;
            }
            num_high_score -= 1;
        }
    }
    cout << " as the highest, with a " << highest_score << " \n\n";

}

void showMoviesLowestRating(const int (rating_array)[NUM_REVIEWERS][NUM_MOVIES]){
    displayRatings(rating_array);
    cout << "\nEnter a movie number (100-" << NUM_MOVIES + 99 << "), to find the lowest rating:";
    int movie_number = get_user_int(100, NUM_MOVIES + 99) - 100;
    int lowest_score = 5;
    int num_low_score = 0;
    for(int i = 0; i < NUM_REVIEWERS; i++){
        if(rating_array[i][movie_number] < lowest_score) {
            lowest_score = rating_array[i][movie_number];
            num_low_score = 1;
        } else if(rating_array[i][movie_number] == lowest_score){
            num_low_score += 1;
        }
    }
    cout << "Movie#" << movie_number + 100 << " lowest rating is " << lowest_score << ", given by reviewer";
    if(num_low_score>1){
        cout << "s";
    }
    cout << " ";
    for(int i = 0; i < NUM_REVIEWERS; i++){
        if(rating_array[i][movie_number] == lowest_score) {
            switch(num_low_score)
            {
                case 2:
                    cout << i+1 << " and ";
                    break;
                case 1:
                    cout << i+1;
                    break;
                default:
                    cout << i+1 << ", ";
            }
            num_low_score -= 1;
        }
    }
    cout << endl << endl;
}