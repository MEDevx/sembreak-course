#include <iostream>
using namespace std;

//basic type conversion
// type 1: implicit - automatic
// type 2: explicit - preceding value with new datatype.


int main() {

    //IMPLICIT - this will automatically give "3" even though x should be double.
    int x = 3.14;
    cout << "The Implicit value is " << x << endl;

    //EXPLICIT
    double y = (int) 3.14; //in this example, we are converting a double into int and storing it in y.
    cout << "\nThe Explicit value is " << y << endl;

    cout << "\n\n\nANOTHER EXAMPLE";

    int correct = 9; //this is the student's score.
    int total = 10; //this is the total number of items/questions.
    double result = correct / total * 100;
    cout << "\nThe result is " << result << "%" << endl;
    //this example will give a 0 we're doing integer division, and it should be double.

    int correctt = 9; //this is the student's score.
    int totals = 10; //this is the total number of items/questions.
    double results = correct / (double) total * 100;
    cout << "\nThe result is " << results << "%" << endl;

    return 0;
}