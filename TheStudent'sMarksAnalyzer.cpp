#include <iostream>
#include <iomanip>  // for setprecision()
using namespace std;

int main() {
    int n; // number of students
    cout << "Enter number of students: ";
    cin >> n;

    int marks[100]; // array to store marks (max 100 students)
    cout << "Enter marks of each student:\n";

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }

    float average = (float)total / n;

    cout << "\nTotal Marks = " << total << endl;
    cout << fixed << setprecision(2); // show average with 2 decimal places
    cout << "Average Marks = " << average << endl;

    system("pause"); // keeps console window open in Dev-C++
    return 0;
}

