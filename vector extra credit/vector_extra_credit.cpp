//
// Created by paulw on 5/15/2023.
//

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#define OS_ADJUSTER 0 // set to 1 for replit use

using namespace std;

void getStringsFromFile(const string& file_in, vector<string> &vector_out);
void printVec(const vector<string>& vector_out);
int countOccurrencesInVec(const string& target, const vector<string>& vector_out);


int main(){
    const string team_path = "Teams.txt";
    const string winners_path = "WorldSeriesWinners.txt";

    vector<string> teams;
    vector<string> winners;

    getStringsFromFile(team_path, teams);
    getStringsFromFile(winners_path, winners);

    printVec(teams);
    cout << "------------------------------------------------------------------------------------------\n"
            "Pick a team from the list above (or make up a team, but they probably won\'t have any wins)\n"
            "------------------------------------------------------------------------------------------\n";
    // ^ cheeky way to get out of doing input validation

    string team_target;
    getline (cin, team_target);
    cout << endl << team_target << " has won " << countOccurrencesInVec(team_target, winners) << " world series.";
    
}

void getStringsFromFile(const string& file_in, vector<string> &vector_out){
    vector_out.clear();
    ifstream fileToRead(file_in);
    string currentLine;
    while(getline(fileToRead, currentLine))
    {
        vector_out.push_back(currentLine.substr(0,currentLine.length()-OS_ADJUSTER));
    }

}

void printVec(const vector<string>& vector_out){
    for (const auto & it : vector_out)
    {
        cout << it << endl;
    }
}

int countOccurrencesInVec(const string& target, const vector<string>& vector_out){
    int counter = 0;
    for (const auto & it : vector_out)
    {
        counter += (target == it);
    }
    return(counter);
}