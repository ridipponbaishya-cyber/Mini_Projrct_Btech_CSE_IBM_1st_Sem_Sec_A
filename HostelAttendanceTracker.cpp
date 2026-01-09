HOSTEL ATTENDANCE TRACKER 
Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.

(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
Input :
1 1 0 1 1 0 1
1 0 1 1 1 1 1
0 1 1 0 1 1 0
1 1 1 1 0 1 1
1 0 1 0 1 0 1
0 0 1 1 1 1 1
1 1 0 0 0 1 1
1 1 1 1 1 0 0
0 1 1 1 1 1 1
1 0 0 1 1 1 1

Output:
Weekly Attendance Summary
-------------------------

Total Present Days:
Student 1: 5
Student 2: 6
Student 3: 4
Student 4: 6
Student 5: 4
Student 6: 5
Student 7: 5
Student 8: 5
Student 9: 6
Student 10: 5

Student with Highest Attendance: Student 2 (6 Days)

Day with Lowest Overall Attendance: Day 2



#include <stdio.h>

int main() {
    int A[10][7];
    int i, j;

    int total[10] = {0};
    int maxAttendance = 0;
    int bestStudent = 0;

    int dayTotal;
    int minDayAttendance = 10;
    int worstDay = 0;

    // Input attendance
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 7; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");
    printf("Total Present Days:\n");

    // Calculate total present days for each student
    for(i = 0; i < 10; i++) {
        total[i] = 0;
        for(j = 0; j < 7; j++) {
            total[i] += A[i][j];
        }

        printf("Student %d: %d\n", i + 1, total[i]);

        if(total[i] > maxAttendance) {
            maxAttendance = total[i];
            bestStudent = i + 1;
        }
    }

    // Calculate attendance for each day
    for(j = 0; j < 7; j++) {
        dayTotal = 0;
        for(i = 0; i < 10; i++) {
            dayTotal += A[i][j];
        }

        if(dayTotal < minDayAttendance) {
            minDayAttendance = dayTotal;
            worstDay = j + 1;
        }
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n",
           bestStudent, maxAttendance);

    printf("\nDay with Lowest Overall Attendance: Day %d\n", worstDay);

    return 0;
}


