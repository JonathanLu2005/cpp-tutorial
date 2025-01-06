#include <iostream>
#include <string>
using namespace std;

int main() {
    // while loop syntax
    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }

    int input;
    while (input != 1 && input != 2) {
        cout << "type 1 or 2: ";
        cin >> input;

        cin.clear();
        cin.ignore(1000, '\n');
    }

    // alternative way to write it with break
    char inputA;
    while (true) {
        cout << "type a or b: ";
        cin >> inputA;

        if (inputA == 'a' || inputA == 'b') {
            cout << "good job" << endl;
            break;
        } else {
            cout << "bad job" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    // using continue
    int j = 0;
    while (j <= 10) {
        j++;
        if (j % 2 != 0) {
            continue;
        } else {
            cout << "its an even number " << j << endl;
        }
    }

    // do while loop
    int k = 10;
    int res = 0;
    int add;
    do {
        cout << " type a number to add together with " << (k-1) << " other numbers: " << endl;

        cin >> add;
        res += add;
        cin.clear();
        cin.ignore(1000, '\n');
        k--;
    } while (k > 0);

    cout << "heres the result! " << res << endl;
}