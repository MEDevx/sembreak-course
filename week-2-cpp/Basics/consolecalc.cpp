#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    double num1, num2, result;
    char loop;

    do {
        cout << "\n***************** THE CALCULATOR *****************\n";

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Pick an operation (+ - * /): ";
        cin >> op;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                    continue;  // Skip to the next iteration if division by zero occurs
                }
                break;
            default:
                cout << "Invalid Input. Please select a valid operation.\n";
                continue;
        }

        cout << "The answer is: " << result << endl;
        cout << "**************************************************\n";

        cout << "\nWould you like to calculate again? [Y/N]: ";
        cin >> loop;

    } while (loop == 'Y' || loop == 'y');

    if (loop != 'Y' && loop != 'Y') {
        cout << "\n\nThank you for using our console calculator. ^^ " << endl;
    }


    return 0;
}
