#include <iostream>
using namespace std;

int main() {
    int n; // number of days
    cout << "Enter number of days: ";
    cin >> n;

    int records[100]; // array to store daily profit/loss (max 100 days)
    cout << "Enter profit/loss for each day (use negative for loss):\n";

    for (int i = 0; i < n; i++) {
        cin >> records[i];
    }

    int totalProfit = 0;
    int totalLoss = 0;
    int netBalance = 0;

    // Calculate total profit and loss
    for (int i = 0; i < n; i++) {
        if (records[i] > 0)
            totalProfit += records[i];
        else
            totalLoss += (-records[i]); // convert negative loss to positive
    }

    netBalance = totalProfit - totalLoss;

    cout << "\nTotal Profit: " << totalProfit << endl;
    cout << "Total Loss: " << totalLoss << endl;
    cout << "Net Balance: " << netBalance << endl;

    system("pause"); // keeps console open in Dev-C++
    return 0;
}
