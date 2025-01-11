#include <iostream>
#include <vector>
#include "hangman_functions.h" //this is here to link .h file here
using namespace std;

//defining functions
void greet() {
  std::cout << "=============\n";
  std::cout << "Hangman: The Trial Game\n";
  std::cout << "=============\n";
  std::cout << "Instructions: Save your sacrifice fro being hanged by guessig the letters in the codeword. \n";
}

void display_misses(int misses) {

  if (misses == 0) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

  else if (misses == 1) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

  else if (misses == 2) {
	cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

  else if (misses == 3) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

  else if (misses == 4) {
	cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

  else if (misses == 5) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

  else if (misses == 6) {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

}

//incorrect guesses portion
void display_status(std::vector<char> incorrect, string answer) {
  cout << "Incorrect Guesses: \n" ;

  for( int  i = 0 ; i < incorrect.size() ; i++) {
    cout << incorrect[i] << " " ;
  }

  cout << "\nCodeword: \n";

  for(int i = 0 ; i < answer.size() ; i++) {
    cout << answer[i] << " " ;
  }
}

void end_game(string answer, string codeword) {
  if (answer == codeword) {
    cout << "Great Job! You actually saved him!\n";
  } else {
    cout << "Oh no, you really cant do anything good, huh?!\n You got him killed!\n";
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    cout << "$$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`$$$$$$$$$$$$$'`$$$";
    cout << "$$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$  $$$$$$$$$$$  $$$$";
    cout << "$$$$. `$' \' \\$`  $$$$$$$!                         !$$$$$$$  '$/ `/ `$' .$$$$";
    cout << "$$$$$. !\\  i  i .$$$$$$$$                           $$$$$$$$. i  i  /! .$$$$$";
    cout << "$$$$$$   `--`--.$$$$$$$$$                           $$$$$$$$$.--'--'   $$$$$$";
    cout << "$$$$$$L        `$$$$$^^$$                           $$^^$$$$$'        J$$$$$$";
    cout << "$$$$$$$.   .'   ""~   $$$    $.                 .$  $$$   ~""   `.   .$$$$$$$";
    cout << "$$$$$$$$.  ;      .e$$$$$!    $$.             .$$  !$$$$$e,      ;  .$$$$$$$$";
    cout << "$$$$$$$$$   `.$$$$$$$$$$$$     $$$.         .$$$   $$$$$$$$$$$$.'   $$$$$$$$$";
    cout << "$$$$$$$$    .$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$$$$$$.    $$$$$$$$";
    cout << "&yd$     $$$$$$$$$$$$$$$$.    $    $$    $   .$$$$$$$$$$$$$$$$     $by&TL$";
    cout << "                                 $    $$    $";
    cout << "                                 $.   $$   .";
    cout << "                                 `$        $'";
    cout << "                                  `$$$$$$$$'";

  }
}




























