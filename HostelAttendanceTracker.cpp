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

