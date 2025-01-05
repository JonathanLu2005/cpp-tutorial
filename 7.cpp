#include <iostream>
#include <string>
using namespace std;

int main() {
    // not
    cout << "!true is " << (!true) << endl;
    cout << "!false is " << (!false) << endl;

    // and
    cout << "true && true is " << (true && true) << endl;
    cout << "true && false is " << (true && false) << endl;
    cout << "false && true is " << (false && true) << endl;
    cout << "false && false is " << (false && false) << endl;

    // or
    cout << "true || true is " << (true || true) << endl;
    cout << "true || false is " << (true || false) << endl;
    cout << "false || true is " << (false || true) << endl;
    cout << "false || false is " << (false || false) << endl;
}