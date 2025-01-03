#include <iostream>
#include <string>
using namespace std;

int main() {
    // constants cant change value, must be given value immediately
    const float gravity = -9.8;
    const int favouriteNumber = 4;
    const string name = "jonathan";
    const bool learningCPP = true;
    const char favouriteChar = 'a';

    cout << gravity << endl; 
    cout << favouriteNumber << endl;
    cout << name << endl;
    cout << learningCPP << endl; 
    cout << favouriteChar << endl;

    // user input, expect int
    int n, x;

    // receive and output it, 0 return if invalid input provided
    cin >> n;
    cout << n << endl;

    // clear and ignore to get rid of error and allow input happen again
    cin.clear();
    cin.ignore(1000, '\n');

    // able retrieve next value
    cin >> x;
    cout << x;
}