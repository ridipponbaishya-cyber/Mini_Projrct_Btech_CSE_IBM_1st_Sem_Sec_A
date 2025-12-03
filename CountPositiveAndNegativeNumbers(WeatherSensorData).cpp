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

