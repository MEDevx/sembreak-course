#include <iostream>
using namespace std;

//with typedef, we can give nicknames to more complicated data types we are too lazy to write.
// the using keyword is better tho
// just replace typedef with "using" and it will be the same.
typedef int hello_t;

int main() {

    constexpr hello_t hello = 2;

    cout <<  "number: " << hello << endl;

    return 0;
}
