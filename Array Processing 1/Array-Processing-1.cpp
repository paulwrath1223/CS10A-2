//
// Created by Paul Fornage on 4/24/2023.
//

/*
 * Project 3: Array Processing I.
 * A program that gives the user a menu of 10 options and utilizes functions with
 * specialized array processing related algorithms to process specific array related data request.
 */

#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

#define NUM_STUDENTS 10

#define TXT_FOLDER_PATH "C:/Users/paulw/CLionProjects/CS10A-2/Array Processing 1"

using namespace std;

void print_header();
int get_user_int(int, int);
void get_array_from_keyboard(int (&)[NUM_STUDENTS]);
void display_scores(int (&)[NUM_STUDENTS]);
void display_highest_score(int (&)[NUM_STUDENTS]);
void display_lowest_score(int (&)[NUM_STUDENTS]);
void display_average(int (&)[NUM_STUDENTS]);
void get_scores_from_file(int (&)[NUM_STUDENTS]);
void display_sss(int (&)[NUM_STUDENTS]);
void sort_scores(int (&)[NUM_STUDENTS]);
void search_for_score(int (&)[NUM_STUDENTS]);
bool is_sorted(int (&)[NUM_STUDENTS]);

int main(){

    int scores[NUM_STUDENTS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int option;

    do {
        print_header();
        option = get_user_int(1,9);
        switch(option){
            case 1:
                get_array_from_keyboard(scores);
                break;
            case 2:
                get_scores_from_file(scores);
                break;
            case 3:
                display_scores(scores);
                break;
            case 4:
                display_highest_score(scores);
                break;
            case 5:
                display_lowest_score(scores);
                break;
            case 6:
                display_average(scores);
                break;
            case 7:
                display_sss(scores);
                break;
            case 8:
                sort_scores(scores);
                break;
            case 9:
                search_for_score(scores);
                break;
            case 10:
                cout << "Array processing test now concluded. Exiting program .....";
                break;
            default:
                cout << "somehow invalid option was selected";

        }
    } while(option < 10);
}

/**
 * @pre user needs to see options
 * @post user sees options
 * Prints what you see below, im not going to copy and paste 95% of the function here.
 */
void print_header(){
    cout << "-------------------------------------------------------------------------------------\n"
            "STUDENT SCORES DATA SET: 1-D ARRAY PROCESSING MENU OPTIONS\n"
            "-----------------------------------------------------------\n"
            "1. New data set: Keyboard input (" << NUM_STUDENTS << " student scores from user)\n"
            "2. New data set: File data read (" << NUM_STUDENTS << " student scores from a file, such as scores.txt)\n"
            "3. Data set: Display current student scores\n"
            "4. Data set: Display highest score\n"
            "5. Data set: Display lowest score\n"
            "6. Data set: Display average score\n"
            "7. Data set: Display single score statistics (enter Student entry number)\n"
            "8. Data set: Sort list\n"
            "9. Data set: Find student with specific score\n"
            "10. Quit program\n"
            "-------------------------------------------------------------------------------------\n\n";
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

/**
 *
 * @param score_reference OUT a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wishes to fill it with user-typed integers.
 * @post 'score_reference' is filled with user-typed integers
 *
 * fills 'score_reference' with user-typed integers.
 *
 */
void get_array_from_keyboard(int (&score_reference)[NUM_STUDENTS]) {
    cout << "---------------------------------------------------\n"
            "Enter " << NUM_STUDENTS << " student scores (range 0 -100)\n"
            "---------------------------------------------------\n\n";
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << "Student #" << i+1 << " score:\t ";
        score_reference[i] = get_user_int(0,100);
    }
}

/**
 *
 * @param score_reference IN a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wants to see the scores of all students
 * @post the scores of all students are displayed
 *
 * displays the scores of all students
 *
 */
void display_scores(int (&score_reference)[NUM_STUDENTS]){
    cout << "---------------------------------------------------\n"
            "Display " << NUM_STUDENTS << " student scores\n"
            "---------------------------------------------------\n\n";
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << "Student #" << i+1 << " score:\t " << score_reference[i] << endl;
    }
}

/**
 *
 * @param score_reference IN a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wants to see which student has the highest score, and what score that is.
 * @post the student with the highest score and the value of such score is displayed to the user
 *
 * displays the student with the highest score and the value of such score to the user
 *
 */
void display_highest_score(int (&score_reference)[NUM_STUDENTS]){
    int temp_max = -1;
    for(int i : score_reference){
        if (i > temp_max){
            temp_max = i;
        }
    }
    cout << "---------------------------------------------------\n"
            "Display highest of " << NUM_STUDENTS << " student scores: " << temp_max << "\n"
            "---------------------------------------------------\n\n";
}

/**
 *
 * @param score_reference IN a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wants to see which student has the lowest score, and what score that is.
 * @post the student with the lowest score and the value of such score is displayed to the user
 *
 * displays the student with the lowest score and the value of such score to the user
 *
 */
void display_lowest_score(int (&score_reference)[NUM_STUDENTS]){
    int temp_min = 101;
    for(int i : score_reference){
        if (i < temp_min){
            temp_min = i;
        }
    }
    cout << "---------------------------------------------------\n"
            "Display lowest of " << NUM_STUDENTS << " student scores: " << temp_min << "\n"
            "---------------------------------------------------\n\n";
}

/**
 *
 * @param score_reference IN a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wants to see the average score.
 * @post the average score is displayed to the user
 *
 * displays the average score
 */

void display_average(int (&score_reference)[NUM_STUDENTS]){
    int sum = 0;
    for(int i : score_reference) {
        sum += i;
    }
    double avg = sum / static_cast<double>(NUM_STUDENTS);
    cout << "---------------------------------------------------\n"
            "Display average of " << NUM_STUDENTS << " student scores: " << avg << "\n"
            "---------------------------------------------------\n\n";
}

/**
 *
 * @param score_reference OUT a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wishes to fill it with integers from a txt file
 * @post 'score_reference' is filled with integers from a txt file of the user's choice
 *
 * fills 'score_reference' with  integers from a txt file of the user's choice in directory 'TXT_FOLDER_PATH'.
 *
 */
void get_scores_from_file(int (&score_reference)[NUM_STUDENTS]){
    cout << "---------------------------------------------------\n"
            "Run-time input of " << NUM_STUDENTS << " student scores from a data file\n"
            "---------------------------------------------------\n\n";

    cout << "files in current directory: ";


    string path = TXT_FOLDER_PATH;
    for (const auto & entry : filesystem::directory_iterator(path))
        cout << entry.path() << endl;

    cout << "Enter student scores data filename: (just the name, you dont need to type the path) ";

    string user_input;
    cin >> user_input;
    path += "/" + user_input;
    ifstream fileToRead(path);
    while(!cin || !fileToRead){
        cin.clear();
        cin.ignore(200,'\n');
        cout << "OOPS, Invalid input. Try again" << endl;
        cin >> user_input;
    }
    int indexer = 0;
    string currentLine;
    while(getline(fileToRead, currentLine)){
        score_reference[indexer] = stoi(currentLine);
        indexer++;
    }
}

/**
 *
 * @param score_reference IN a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wants to see the single score statistics (SSS defined below)
 * @post the single score statistics of a student of the user's choice are displayed to the user
 *
 * single score statistics (SSS): the number of elements with values higher and lower than the target element
 *
 * asks the user what student to display the SSS of,
 * and then prints the number of students with scores higher and lower than the score of the selected student
 */
void display_sss(int (&score_reference)[NUM_STUDENTS]){
    int num_below = 0;
    int num_above = 0;

    cout << "---------------------------------------------------\n"
            "Display statistics for a single score out of 10 student scores:\n"
            "---------------------------------------------------\n"
            "Enter student entry or row # for score statistic (1 -10): ";

    int index = get_user_int(1, NUM_STUDENTS);
    int target = score_reference[index];
    for(int i : score_reference){
        if(i != index){
            if(score_reference[i] > target){
                num_above++;
            } else if(score_reference[i] < target){
                num_below++;
            }
        }

    }
    cout << "\nStudent #" << index << " score: " << target << "\n";
    if (num_above != 0){
        cout << "Score statistics: " << num_above << " higher\n";
    } else {
        cout << "Score statistics: none higher\n";
    }
    if (num_below != 0){
        cout << "Score statistics: " << num_below << " lower\n";
    } else {
        cout << "Score statistics: none lower\n";
    }
}

/**
 *
 * @param score_reference IN a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wants to see what student (if any) has a user-given score
 * @post the user sees what student (if any) has the score they inputted
 * @O(log(n)) where n is the length of 'score_reference' ('NUM_STUDENTS')
 *
 * makes sure that the list is sorted (not a precondition because it has an explicit check for this case)
 * asks the user what score to search for, then uses a binary search to find a the closest value to the target.
 * It then check if that closest value is equal to the target, and if it is, it print the student that had the target student,
 * otherwise says no student had that score
 *
 *
 *
 */
void search_for_score(int (&score_reference)[NUM_STUDENTS]){

    // Start by making sure the list is sorted, a precondition for any binary search

    if(!is_sorted(score_reference)) {
        cout << "\nList must be sorted to search\n";
        return;
    }

    // Now that it is known that the list is sorted, start initializing and declaring variables

    int upper_index_bound = NUM_STUDENTS;
    int lower_index_bound = 0;
    cout << "---------------------------------------------------\n"
            "Display row # of student with given score, if any\n"
            "---------------------------------------------------\n"
            "Enter score to search for (0 -100): ";
    int target = get_user_int(0,100);
    int current_guess;
    int current_guess_index;
    //int num_iterations = 0; // DEBUG
    /*
     Now that all variables are declared and the target value is known, we begin the loop.
     Each iteration of the loop moves the bounds ('lower_index_bound' and 'upper_index_bound') for where the target could be closer to the target,
     and continues until the bounds close in on one value
    */
    while(upper_index_bound != lower_index_bound){ // && num_iterations < 20 // DEBUG
        //num_iterations++; // DEBUG

        current_guess_index = static_cast<int>(0.5 + static_cast<double>(upper_index_bound) + static_cast<double>(lower_index_bound)) / 2;
        // Set the index of the current guess to the value halfway between 'lower_index_bound' and 'upper_index_bound'

        current_guess = score_reference[current_guess_index];
        // Set the current guess to the element at index 'current_guess_index' of the list

        if(current_guess < target){
            lower_index_bound = current_guess_index;
            // if the guess is lower than the target, we can guarantee that the index of the target (if present)
            // must be above 'current_guess_index', so set the lower bound to 'current_guess_index'
        } else if(current_guess > target){
            upper_index_bound = current_guess_index - 1;
            // if the guess is higher than the target, we can guarantee that the index of the target (if present)
            // must be below 'current_guess_index', so set the upper bound to 'current_guess_index - 1'
            // the '-1' is necessary because of rounding in the expression that calculates the new guess index
        }
        else {
            // the 'else' case is only true when 'current_guess == target', but 'else' is more efficient,
            // so while less readable, 'else' is used instead.
            cout << "Student #" << current_guess_index+1 << " score :    " << score_reference[current_guess_index] << endl;
            return;
            // if the current guess is equal to the target then display the index of the current guess (also the index of the target)
        }
        // cout << "\niter " << num_iterations << ":\n\tcurrent_guess_index = " << current_guess_index << ": " << score_reference[current_guess_index] << "\n\tlower = " << lower_index_bound << ": " << score_reference[lower_index_bound] << "\n\tupper = " << upper_index_bound << ": " << score_reference[upper_index_bound];
    }
    // if the loop exits, then the bounds are equal, meaning the algorithm has narrowed the possible matches
    // to only one value, and because the 'else' case above was not satisfied (it would cause the function to return and stop there),
    // it can be deduced that the current guess is not equal to the target.
    // Therefore, the whole list has been searched and the target was not found, meaning the target is not present in the list
    cout << "No students found with score of " << target << endl;
}

/**
 *
 * @param score_reference IN/OUT a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the user wants to sort the list in ascending order
 * @post 'score_reference' is sorted in ascended order, and running 'is_sorted' on the list would return true
 * @O(n^2) where n is the length of 'score_reference' ('NUM_STUDENTS')
 *
 * Sorts the list using selection sort.
 *
 */
void sort_scores(int (&score_reference)[NUM_STUDENTS]){
    // declare variables and print a header
    cout << "---------------------------------------------------\n"
            "Sorting entries...\n"
            "---------------------------------------------------\n";
    int temp_min_index;
    int target;
    int buffer;

    // once the variables have been declared, we enter the loop.

    for(int i = 0; i < NUM_STUDENTS; i++){
        // iterate through all indices of 'score_reference'
        temp_min_index = i;
        // initialize 'temp_min_index' with 'i'
        target = score_reference[i];
        // initialize 'target' with the value in the list 'score_reference' at index 'i'
        for(int j = i; j < NUM_STUDENTS; j++){
            // iterate through all indices after 'i'
            if(score_reference[j] < score_reference[temp_min_index]) {
                temp_min_index = j;
                // when a new lowest value is found, set 'temp_min_index' to the index of such value
            }
        }
        // 'temp_min_index' is now the index of the lowest value after 'i'
        if(score_reference[temp_min_index]<target){
            buffer = score_reference[temp_min_index];
            score_reference[temp_min_index] = target;
            score_reference[i] = buffer;
            // if the lowest value is lower than the value at index 'i', swap their values
        }
    }
    cout << "\nEntries sorted\n";
}

/**
 *
 * @param score_reference IN a list of integers with length 'NUM_STUDENTS' representing the scores of students
 * @pre 'score_reference' is of length 'NUM_STUDENTS' and the program wants to determine if it is sorted in ascending order
 * @post None, this function is purely functional
 * @return a boolean equal to 'true' when the list is sorted in ascending order, and 'false' otherwise.
 */
bool is_sorted(int (&score_reference)[NUM_STUDENTS]){
    for(int i = 1; i < NUM_STUDENTS; i++){
        if(score_reference[i-1] > score_reference[i]){
            return false;
        }
    }
    return true;
}