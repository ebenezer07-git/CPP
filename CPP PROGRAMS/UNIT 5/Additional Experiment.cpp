#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "science";
    string guessed(word.length(), '*');
    int chances = 3;
    char ch;
    bool found;

    cout << "Welcome to the Word Guessing Game!\n";

    while (guessed != word && chances > 0) {
        cout << "Word: " << guessed << "\nEnter a character: ";
        cin >> ch;
        found = false;

        for (size_t i = 0; i < word.length(); i++) {
            if (word[i] == ch && guessed[i] == '*') {
                guessed[i] = ch;
                found = true;
            }
        }

        if (!found) {
            chances--;
            cout << "Sorry! The character '" << ch << "' is not in the word. You still have " 
                 << chances << " chances.\n";
        } else {
            cout << "Good! You found a letter.\n";
        }
    }

    if (guessed == word)
        cout << "\nCongratulations! You guessed the word: " << word << endl;
    else
        cout << "\nOut of chances! The mystery word was: " << word << endl;

    return 0;
}
