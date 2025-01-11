#include <iostream>
#include <cmath>
using namespace std;



int main() {

    int loop = 5;
    int age;

    for (int i = 0; i < loop; i++) {
        cout << "LOOP NO " <<  i + 1 << endl;
        cout << "Enter your age: ";
        cin >> age;

        if (age >= 18 && age < 100) {
          cout << "You are eligible for a small money.\n\n";
        } else if (age < 0) {
            cout << "You dont exist.\n\n";
        } else if (age >= 100) {
         cout << "You are too old for a small money.\n\n";
        } else {
          cout << "You are not eligible for a small money.\n\n";
        }
    }

    cout << "LOOP COMPLETED!\n\n";

    return 0;

}