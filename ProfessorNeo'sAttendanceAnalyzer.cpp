#include <iostream>
using namespace std;

int main() {
    int n; // number of students
    cout << "Enter total number of students: ";
    cin >> n;

    int attendance[100]; // array to store attendance (max 100 students)
    cout << "Enter attendance for each student (1 for present, 0 for absent):\n";

    for (int i = 0; i < n; i++) {
        cin >> attendance[i];
    }

    int presentCount = 0;
    int absentCount = 0;

    // Count present and absent students
    for (int i = 0; i < n; i++) {
        if (attendance[i] == 1)
            presentCount++;
        else if (attendance[i] == 0)
            absentCount++;
        else
            cout << "Invalid entry (only 0 or 1 allowed) for student " << i + 1 << endl;
    }

    cout << "\nPresent: " << presentCount << endl;
    cout << "Absent: " << absentCount << endl;

    system("pause"); // keeps console window open in Dev-C++
    return 0;
}
