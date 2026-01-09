Problem 2: Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥️ Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z

Example 1:

Input
6
3 -2 0 7 -5 8

Output
Positive = 3
Negative = 2
Zero = 1



#include <iostream>
using namespace std;

int main() {
    int n; // number of readings
    cout << "Enter number of temperature readings: ";
    cin >> n;

    int readings[100]; // array to store temperature readings (max 100)
    cout << "Enter the readings (positive, negative, or zero):\n";

    for (int i = 0; i < n; i++) {
        cin >> readings[i];
    }

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    // Analyze readings
    for (int i = 0; i < n; i++) {
        if (readings[i] > 0)
            positiveCount++;
        else if (readings[i] < 0)
            negativeCount++;
        else
            zeroCount++;
    }

    cout << "\nPositive = " << positiveCount << endl;
    cout << "Negative = " << negativeCount << endl;
    cout << "Zero = " << zeroCount << endl;

    system("pause"); // Keeps console open in Dev-C++
    return 0;
}


