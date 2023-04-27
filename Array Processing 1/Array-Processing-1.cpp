//
// Created by paulw on 4/24/2023.
//

#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

#define NUM_STUDENTS 10
#define NUM_STUDENTS_AS_DOUBLE 10.0
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

void get_array_from_keyboard(int (&score_reference)[NUM_STUDENTS]) {
    cout << "---------------------------------------------------\n"
            "Enter " << NUM_STUDENTS << " student scores (range 0 -100)\n"
            "---------------------------------------------------\n\n";
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << "Student #" << i+1 << " score : ";
        score_reference[i] = get_user_int(0,100);
    }
}

void display_scores(int (&score_reference)[NUM_STUDENTS]){
    cout << "---------------------------------------------------\n"
            "Display " << NUM_STUDENTS << " student scores\n"
            "---------------------------------------------------\n\n";
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << "Student #" << i+1 << " score :    " << score_reference[i] << endl;
    }
}

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

void display_average(int (&score_reference)[NUM_STUDENTS]){
    int sum = 0;
    for(int i : score_reference) {
        sum += i;
    }
    double avg = sum / NUM_STUDENTS_AS_DOUBLE;
    cout << "---------------------------------------------------\n"
            "Display average of " << NUM_STUDENTS << " student scores: " << avg << "\n"
            "---------------------------------------------------\n\n";
}

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

void search_for_score(int (&score_reference)[NUM_STUDENTS]){
    if(!is_sorted(score_reference)) {
        cout << "\nList must be sorted to search\n";
        return;
    }
    int upper = NUM_STUDENTS;
    int lower = 0;
    cout << "---------------------------------------------------\n"
            "Display row # of student with given score, if any\n"
            "---------------------------------------------------\n"
            "Enter score to search for (1 -100): ";
    int target = get_user_int(1,100);
    int current_guess;
    int current_guess_index;
//    int num_iterations = 0;
    while(upper != lower){   // && num_iterations < 20
//        num_iterations++;
        current_guess_index = static_cast<int>(0.5 + static_cast<double>(upper) + static_cast<double>(lower))/2;
        current_guess = score_reference[current_guess_index];
        if(score_reference[lower] > target || score_reference[upper] < target){
            lower = current_guess_index;
            upper = current_guess_index;
        } else if(current_guess>target){
            lower = current_guess_index;
        } else if(current_guess<target){
            upper = current_guess_index;
        }
        else {
            lower = current_guess_index;
            upper = current_guess_index;
        }
//        cout << "\niter " << num_iterations << ":\n\tcurrent_guess_index = " << current_guess_index << ": " << score_reference[current_guess_index] << "\n\tlower = " << lower << ": " << score_reference[current_guess_index] << "\n\tupper = " << upper << ": " << score_reference[current_guess_index];
    }
    if(target == current_guess){
        cout << "Student #" << current_guess_index+1 << " score :    " << score_reference[current_guess_index] << endl;
        return;
    }
    cout << "No students found with score of " << target << endl;


}

void sort_scores(int (&score_reference)[NUM_STUDENTS]){
    cout << "---------------------------------------------------\n"
            "Sorting entries...\n"
            "---------------------------------------------------\n";
    int temp_min_index;
    int target;
    int buffer;
    for(int i = 0; i < NUM_STUDENTS; i++){
        temp_min_index = i;
        target = score_reference[i];
        for(int j = i; j < NUM_STUDENTS; j++){
            if(score_reference[j] < score_reference[temp_min_index]){
                temp_min_index = j;
            }
        }
        if(score_reference[temp_min_index]<target){
            buffer = score_reference[temp_min_index];
            score_reference[temp_min_index] = target;
            score_reference[i] = buffer;
        }
    }
    cout << "\nEntries sorted\n";
}

bool is_sorted(int (&score_reference)[NUM_STUDENTS]){
    for(int i = 1; i < NUM_STUDENTS; i++){
        if(score_reference[i-1] > score_reference[i]){
            return false;
        }
    }
    return true;
}