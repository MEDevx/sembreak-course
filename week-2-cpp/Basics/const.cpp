#include <iostream>
using namespace std;

namespace first {
    int x = 5;
}

namespace second {
    int x = 2;
}

int main() {
    constexpr int x = 0;
    cout << "The number you are looking for is " << x << endl;
    cout << "The number you are looking for is " << first::x << endl;
    cout << "The number you are looking for is " << second::x << endl;

    return 0;
}