Problem 1: Reverse the Array (Neha’s Diary Entries)
🧩 Problem Story:

Neha keeps a diary of her daily exercise times (in minutes).
She wants to review her progress, but she prefers to see the latest day’s record first.

Write a program to help Neha reverse the order of her recorded exercise times.

✅ Task:

Given n numbers representing Neha’s daily exercise time, print them in reverse order.

🧠 Input Format:

The first line contains an integer n — the number of days.

The second line contains n space-separated integers representing exercise times.
Output Format:

Print the exercise times in reverse order on a single line separated by spaces.

🧩 Example 1:

Input
5
10 20 30 40 50

Output
50 40 30 20 10



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


