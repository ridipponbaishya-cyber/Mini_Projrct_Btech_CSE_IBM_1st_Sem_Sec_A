#include <iostream>
using namespace std;

int main() {
    int n; // number of days (entries)
    cout << "Enter number of days: ";
    cin >> n;

    int diary[100]; // array to store exercise times (max 100 days)
    cout << "Enter exercise times for each day (in minutes):\n";

    for (int i = 0; i < n; i++) {
        cin >> diary[i];
    }

    cout << "\nExercise times in reverse order:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << diary[i] << " ";
    }

    cout << endl;
    system("pause"); // Keeps console window open in Dev-C++
    return 0;
}

