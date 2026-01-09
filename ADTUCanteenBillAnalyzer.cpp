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

