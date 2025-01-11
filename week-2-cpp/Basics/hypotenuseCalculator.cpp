#include <iostream>
#include <math.h>
#include <valarray>
using namespace std;



int main() {

    double a;
    double b;

    cout << "Please enter the first number: ";
    cin >> a;
    cout << "Please enter the second number: ";
    cin >> b;

    const double c = round(sqrt(pow(a, 2) + pow(b, 2)));

    cout << "The hypotenuse of " << a << " and " << b << " is " << c << endl;
    return 0;
}