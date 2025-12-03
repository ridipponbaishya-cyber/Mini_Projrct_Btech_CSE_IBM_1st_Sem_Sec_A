#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    bool isPalindrome = true; // assume it is a palindrome

    int length = word.length();

    // Check characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    cout << endl;
    if (isPalindrome)
        cout << "Perfect Secret Word" << endl;
    else
        cout << "Not a Secret Word" << endl;

    system("pause"); // keeps console window open in Dev-C++
    return 0;
}

