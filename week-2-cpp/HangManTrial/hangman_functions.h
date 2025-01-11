#include <iostream>
#include <vector> //we can use this to store our incorrect guesses.

using namespace std;

//declaring functions
//it's void because we're only displaying random texts.
void greet();
void display_misses(int misses);
void display_status(std::vector<char> incorrect, string answer);
void end_game(string answer, string codeword);