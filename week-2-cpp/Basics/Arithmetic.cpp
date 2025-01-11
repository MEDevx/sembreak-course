#include <iostream>
using namespace std;

//returns the result of arithmetic operations


int main() {
    //ADDITION {
        int student = 20;
        int student1 = 3;

        //both will add one student.
        student = student + 1; //one way of doing it
        student += 2; //is another way of doing it.

        //directly running this will result to 23 since it will all everything mentioned.
        cout << "\nADDITION:" << endl;
        cout << "The First number is " << student << " because it added everything since they have the same identifiers." << endl;

        student1++;  //you can also do it like this.
        cout << "The next number is " << student1 << endl;
    //}

    //SUBTRACTION {
        int Sub = 20;
        int Sub1 = 3;


        Sub = Sub - 1;
        Sub -= 2;

        cout << "\n\nSUBTRACTION:" << endl;
        cout << "The First number is " << Sub << " because it subtracted everything since they have the same identifiers." << endl;

        Sub1-- ;
        cout << "The next number is " << Sub1 << endl;
    //}

    //MULTIPLICATION {
        int Mul = 20;

        Mul = Mul * 1;
        Mul *= 2;

       cout << "\n\nMULTIPLICATION:" << endl;
        cout << "The number is " << Mul << " because it multiplied to 1 and 2." << endl;

    //}

    //DIVISION {
        int Div = 20;

        Div = Div /1;
        Div /= 1;

        cout << "\n\nDIVISION:" << endl;
        cout << "The First number is " << Div << " because it's divided by 1." << endl;

    //}
    return 0;
}