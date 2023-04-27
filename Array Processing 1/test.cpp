//
// Created by paulw on 4/24/2023.
//

#include <iostream>


#define NUM_STUDENTS 10


using namespace std;

void sort_scores(int (&score_reference)[NUM_STUDENTS]){
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
}

int main(){
    int scores[NUM_STUDENTS] = {10, 1, 2, 3, 20, 5, 6, 7, 8, 9};
    sort_scores(scores);
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout << "Student #" << i+1 << " score :    " << scores[i] << endl;
    }
}