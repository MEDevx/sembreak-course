#include <iostream>
using namespace std;



int main() {

    int month;
    constexpr int loop = 5;

    for (int i = 0; i < loop; i++) {
        cout << "Please enter a number between 1 and 12: ";
        cin >> month;

        switch (month) {
            case 1:
                cout << "Month " << month << " is JANUARY." << endl;
            break;
            case 2:
                cout << "Month " << month << " is FEBRUARY." << endl;
            break;
            case 3:
                cout << "Month " << month << " is MARCH." << endl;
            break;
            case 4:
                cout << "Month " << month << " is APRIL." << endl;
            break;
            case 5:
                cout << "Month " << month << " is MAY." << endl;
            break;
            case 6:
                cout << "Month " << month << " is JUNE." << endl;
            break;
            case 7:
                cout << "Month " << month << " is JULY." << endl;
            break;
            case 8:
                cout << "Month " << month << " is AUGUST." << endl;
            break;
            case 9:
                cout << "Month " << month << " is SEPTEMBER." << endl;
            break;
            case 10:
                cout << "Month " << month << " is OCTOBER." << endl;
            break;
            case 11:
                cout << "Month " << month << " is NOVEMBER." << endl;
            break;
            case 12:
                cout << "Month " << month << " is DECEMBER." << endl;
            break;
            default: cout << "Enter a valid month." << endl;
        }
    }
    return 0;
}