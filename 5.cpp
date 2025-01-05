#include <iostream>
#include <string>
using namespace std;

int main() {
    // addition
    int x = 8;
    int y = 9;
    int sum = x + y;
    cout << "adding " << sum << endl;

    // subtraction
    int sub = x - y;
    cout << "subtracting " << sub << endl;

    // division
    int div1 = y / x;
    float div2 = y / x;
    cout << "divide int " << div1 << endl;
    cout << "divide float " << div2 << endl;

    // multiply
    int times = x * y;
    cout << "multiply " << times << endl;

    // compound
    x += 2;
    cout << "+= " << x << endl;

    x *= 2;
    cout << "*= " << x << endl;

    x /= 2;
    cout << "/= " << x << endl;

    x++;
    cout << "++ " << x << endl;

    y--;
    cout << "-- " << y << endl;

    // modolus
    // remainder of division, operand must be same type to do %
    int remainder = x % y;
    cout << "% remainder " << remainder << endl;
}