#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check even or odd
    if (n % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    // Check prime or not
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime Number" << endl;
    else
        cout << "Not Prime" << endl;

    system("pause"); // for Dev-C++ output window
    return 0;
}

