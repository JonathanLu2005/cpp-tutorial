#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2;

    cout << "type a number ";
    cin >> num1;

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "type a number ";
    cin >> num2;

    cout << "these 2 numbers are same " << (num1 == num2);

}