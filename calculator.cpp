#include <iostream>
#include <string>
using namespace std;  

int main() {
    string name;
    cout << "enter name: ";
    cin >> name;
    cout << "name is " << name << endl;

    int num1, num2;

    cout << "enter a number: ";
    cin >> num1;

    cin.clear();
    cin.ignore(1000, '\n');

    cout << "enter another number: ";
    cin >> num2;

    int sum = num1 + num2;

    cout << "The sum is " << sum << endl;

    float rating;
    cout << "enter rating for this calculator: ";
    cin >> rating;
    cout << "rating is" << rating << endl;
}