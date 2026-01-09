Problem Title: Riya’s Secret Word
🧩 Problem Story:

Riya loves creating secret words.
She calls a word “Perfect Secret Word” if it reads the same forward and backward.

For example, words like madam, noon, and level are her favorites because they look the same from both sides!

Now, she wants your help to check whether her word is a Perfect Secret Word or not.

Your Task:

Write a program that takes a string as input and prints:

"Perfect Secret Word" — if the string is a palindrome.

"Not a Secret Word" — if it is not.

Input Format:

A single word (string) entered by the user.

📤 Output Format:

A single line of text:
Either "Perfect Secret Word" or "Not a Secret Word"



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


