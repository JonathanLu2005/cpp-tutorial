#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "please enter a number for me from 1 to 5" << endl;
    int num;
    cin >> num;

    cin.clear();
    cin.ignore(1000, '\n');

    switch (num) {
        case 1:
            cout << "you enter 1" << endl;
            break;
        case 2:
            cout << "you enter 2" << endl;
            break;
        case 3:
            cout << "you enter 3" << endl;
        case 4:
            cout << "you enter 3 or 4" << endl;
        case 5:
            cout << "you enter 3 or 4 or 5" << endl;
            break;
        default:
            cout << "you didnt enter a number from 1 to 5" << endl;
    }
}