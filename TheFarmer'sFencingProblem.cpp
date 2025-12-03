#include <iostream>
using namespace std;

int main() {
    int length, width;

    cout << "Enter length and width of the land: ";
    cin >> length >> width;

    int area = length * width;
    int perimeter = 2 * (length + width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    system("pause"); // For Dev-C++
    return 0;
}

