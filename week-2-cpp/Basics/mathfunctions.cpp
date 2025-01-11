#include <iostream>
#include <cmath>
using namespace std;



int main() {

 double a = 4;
 double b = 2;
 double c;
 double d;
 double power;
 double root;

 c = max(a, b); //checks which one is bigger.
 d = min(a, b); //checks which one is smaller.
 power = pow(a, b); //this means a to the power of b.
 root = sqrt(power); // checks the root.

 cout << c << " is bigger." << endl;
 cout << d << " is smaller." << endl;
 cout << a <<" to the power of " << b << " is " << power << endl;
 cout << "The root of " << power << " is " << root << endl;

//there are so many, gitamad na ko.
    return 0;
}