#include <iostream>
#include <string>
using namespace std;

int main() {
    // logical operators, used for characters, strings, numbers etc
    bool test = 'a' < 'b';
    cout << "a < b is " << test << endl;

    test = 'a' > 'b';
    cout << "a > b is " << test << endl;

    test = 1 <= 2;
    cout << "1 <= 2 is " << test << endl;

    test = 1 >= 2;
    cout << "1 >= 2 is " << test << endl;

    test = "hello" != "HELLO";
    cout << "hello != HELLO is " << test << endl;

    test = "hello" == "HELLO";
    cout << "hello == HELLO is " << test << endl;
}