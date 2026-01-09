Question: The Student’s Marks Analyzer

💡 Problem Story:
A teacher wants to analyze the marks of her students in a test.
She asks you to write a program that stores the marks of n students and finds out:

The total marks obtained by all students.

The average marks of the class.

Can you help the teacher by writing the program?
Task:

Write a program that takes the number of students and their marks as input and calculates:

The total marks

The average marks

Input Format:

The first line contains one integer n — number of students.

The next line contains n integers — marks of each student.

📤 Output Format:

Print two lines:

First line: "Total Marks = <value>"

Second line: "Average Marks = <value>"
Example 1:

Input:
5
80 70 90 85 75

Output:
Total Marks = 400
Average Marks = 80.00



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


