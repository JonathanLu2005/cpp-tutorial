#include <iostream>
#include <string>
using namespace std;

// reference is an alias for variables 

int main() {
    int a = 2;
    
    // create reference, b is now a reference to a
    // if we modify b, it modifies a, b tells where a is and give access to a

    // reference rules, when create reference must initialise it, cant make reference equal to NULL, types must be same
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    a = 3;

    cout << a << endl;
    cout << b << endl;

    b = 4;

    cout << a << endl;
    cout << b << endl;

    // can make reference of reference
    int &c = b;
    c = 5;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    // to find memory address of variable, get same as b and c are reference to a
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
}