// Section 19
// Challenge 2
// Automated Grader
//read the correct answer
//read student name and answer
//for loop checking how many correct answer
#include <fstream>
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    ifstream infile("responses.txt");
    string answer, student_answer, student_name;
    // double avg_score;
    int sum = 0, student_count = 0;
    infile >> answer;
    cout << setw(15) << left << "Student"  << "Score" << endl;
    cout << setw(30) << setfill('-') << "" << endl;
    while (!infile.eof()) {
        int score = 0;
        infile >> student_name >> student_answer;
        for (int i = 0; i < student_answer.size(); i++) {
            if (student_answer.at(i) == answer.at(i)) {
                score++;
            }
        }
        cout << setfill(' ') << setw(15) << left << student_name << score << endl;
        sum += score;
        student_count++;
    }
    cout << setw(30) << setfill('-') << "" << endl;
    cout << "average score: " << static_cast<double>(sum) / student_count << endl;
    cout << "Hello world" << endl;
    return 0;
}

