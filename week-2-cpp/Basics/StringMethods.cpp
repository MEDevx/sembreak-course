#include <iostream>
#include <cmath>
using namespace std;



int main() {

    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    if (name.length() > 12) {
        cout << "You entered too many characters. It can't be over 12 characters long." << endl;
    } else {
        cout << "You entered the corresponding characters.\nWELCOME," << name << "!" << endl;
    }

    if (name.empty()) {
        cout << "Where's your name??" << endl;
    }
    return 0;
}