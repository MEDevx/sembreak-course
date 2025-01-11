#include <iostream>
#include <cmath>
using namespace std;



int main() {

    double temp;
    char unit;
    char loop;

    do {
       cout << "\n***************** THE TEMPERATURE CONVERTER *****************\n";
            cout << "C = Celcius\n F = Farenheit\n";

            cout << "What unit would you like to convert to? [C/F]";
            cin >> unit;

            if (unit == 'F' || unit == 'f') {
               cout << "Enter temperature in Celcius: ";
               cin >> temp;
               temp = (1.8 * temp) + 32;
               cout << "Temperature in Farenheit is: " << temp << " F.\n\n"<< endl;
            }

            else if (unit == 'C' || unit == 'c') {
                cout << "Enter temperature in Farenheit: ";
                cin >> temp;
                temp = (temp - 32) / 1.8;
                cout << "Temperature in Celcius is: " << temp << " C."<< endl;
            }

            else {
                cout << "Enter a valid temperature. \nWould you like to try again? [Y/N]";
                cin >> loop;
            }
       cout << "***************************************************************\n";

       cout << "\nWould you like to try again? [Y/N]: ";
       cin >> loop;

    } while (loop == 'Y' || loop == 'y');

    if (loop != 'Y' || loop != 'y') {
        cout << "\n\nThank you for using our temperature converter. ^^ " << endl;
    }

    return 0;
}