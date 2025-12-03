#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the two plank lengths: ";
    cin >> a >> b;

    int num1 = a, num2 = b;
    int gcd;

    // Find GCD using the Euclidean Algorithm
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    gcd = num1;

    // LCM formula: (a * b) / GCD
    int lcm = (a * b) / gcd;

    cout << "\nGCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    system("pause"); // For Dev-C++ to keep output window open
    return 0;
}

