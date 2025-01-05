#include <iostream>
#include <string>
using namespace std;

int main() {
    // if statement
    int x;
    cout << "enter a number: ";
    cin >> x;

    cin.clear();
    cin.ignore(1000, '\n');

    if (x < 7) {
        cout << "x is less than 7" << endl;

        // nested
        if (x < 3) {
            cout << "x is less than 3" << endl;
        }
    // else if
    } else if (x <= 10) {
        cout << "x is more than 7 but less than/equal to 10" << endl;
    } else {
        cout << "x is not less than or equal to 10" << endl;
    }
}