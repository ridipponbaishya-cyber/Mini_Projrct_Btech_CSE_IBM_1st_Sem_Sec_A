#include <iostream>
#include <iomanip>   // for setprecision()
using namespace std;

int main() {
    float C;
    cout << "Enter temperature in Celsius: ";
    cin >> C;

    // Convert Celsius to Fahrenheit
    float F = (C * 9.0 / 5.0) + 32;

    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit = " << F << endl;

    system("pause");   // For Dev-C++ to keep output window open
    return 0;
}

