#include <iostream>
#include <vector>
#include "hangman_functions.h"

using namespace std;
int main() {

    greet();

    const string codeword = "exposure therapy";
    string answer = "________ _______";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;


    while (answer != codeword && misses < 2) {
        display_misses(misses);
        display_status(incorrect, answer);

        cout << "\n*************************************************************\n";
        cout << "\n\n Pick a letter: ";
        cin >> letter;
        for (int i = 0; i < codeword.length(); i++) {
            if (letter == codeword[i]) {
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess == true) {
            cout << "\nGreat Job, you are Correct!\n";
        } else {
            cout << "\nSorry, you're wrong, dummy. Another part will be sacrificed!\n";
            cout << "\n*************************************************************\n";
            incorrect.push_back(letter); // the incorrect will be pushed back so that it will not skip that current letter, I guess??
            misses++;
        }
        guess = false;
    }

    end_game(answer, codeword);

    return 0;
}






























































