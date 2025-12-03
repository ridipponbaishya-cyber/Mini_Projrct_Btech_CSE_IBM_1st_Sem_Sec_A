#include <iostream>
using namespace std;

int main() {
    int marks[5][3]; // 5 students × 3 subjects
    string subjects[3] = {"Mathematics", "Physics", "Computer Science"};

    cout << "Enter marks of 5 students in 3 subjects:\n\n";

    // Input marks for 5 students
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> marks[i][j];
        }
    }

    cout << endl;

    // Find highest marks in each subject
    for (int j = 0; j < 3; j++) {
        int highest = marks[0][j];
        for (int i = 1; i < 5; i++) {
            if (marks[i][j] > highest)
                highest = marks[i][j];
        }
        cout << "Highest marks in " << subjects[j] << ": " << highest << endl;
    }

    return 0;
}
