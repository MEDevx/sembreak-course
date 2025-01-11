#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;

    cout << "The value you've given is " << x << ".\n\nWOULD YOU LIKE TO CONTINUE?\nClick Y if yes and N if no." << endl;

    char response;
    cin >> response;

    if (response == 'Y' || response == 'y') {
        cout << "Thank you for continuing." << endl;
    } else {
        cout << "Bye." << endl;
    }

    return 0;
}
