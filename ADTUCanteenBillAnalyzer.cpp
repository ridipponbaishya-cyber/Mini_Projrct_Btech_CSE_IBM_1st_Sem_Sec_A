**Problem Title: ADTU Canteen Bill Analyzer
Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  

Highest collection on Day 2  
Highest spender: Student 1 and Student 3



#include <stdio.h>

int main() {
    int n, m;
    int bill[50][50];
    int i, j;

    int studentTotal[50] = {0};
    int dayTotal[50] = {0};

    int maxStudentSpend = 0;
    int maxDayCollection = 0;

    // Input number of students and days
    scanf("%d %d", &n, &m);

    // Input bill data
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
        }
    }

    // Calculate total spent by each student (row-wise sum)
    for (i = 0; i < n; i++) {
        studentTotal[i] = 0;
        for (j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];
        }

        if (studentTotal[i] > maxStudentSpend) {
            maxStudentSpend = studentTotal[i];
        }
    }

    // Calculate total collection for each day (column-wise sum)
    for (j = 0; j < m; j++) {
        dayTotal[j] = 0;
        for (i = 0; i < n; i++) {
            dayTotal[j] += bill[i][j];
        }

        if (dayTotal[j] > maxDayCollection) {
            maxDayCollection = dayTotal[j];
        }
    }

    // Output student totals
    for (i = 0; i < n; i++) {
        printf("Student %d total: ?%d\n", i + 1, studentTotal[i]);
    }

    // Output day with highest collection
    for (j = 0; j < m; j++) {
        if (dayTotal[j] == maxDayCollection) {
            printf("\nHighest collection on Day %d\n", j + 1);
            break;
        }
    }

    // Output highest spender(s)
    printf("Highest spender: ");
    for (i = 0; i < n; i++) {
        if (studentTotal[i] == maxStudentSpend) {
            printf("Student %d ", i + 1);
        }
    }

    return 0;
}


