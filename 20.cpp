#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
} 

int getNumber() {
    return 6;
}

void test() {
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }
}

// optional parameter by giving it a default value
int doMath(int x, int y, int z = 1) {
    return (x+y) * z;
}

// pair return type
pair<int, int> makePair(int x, int y) {
    if (x > y) {
        return pair<int, int>(x, y);
    }

    return pair<int, int>(y,x);
}

// pass arguments as references
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// pass argument as pointers
void swapTwo(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // function
    cout << "add function" << endl;
    int result = add(2,3);
    cout << result << endl;

    // parametereless functjon
    cout << "parameterless function" << endl;
    cout << getNumber() << endl;

    // returnless function
    cout << "returnless function" << endl;
    test();

    // optional parameter
    cout << "optional parameter function" << endl;
    cout << doMath(2, 2) << endl;
    cout << doMath(2, 2, 2) << endl;

    // weird return type
    cout << "weird pair return type" << endl;
    cout << makePair(2,1).first << endl;
    cout << makePair(3,6).second << endl;

    // pass arguments as references, so then able to apply changes to og variables via the references
    cout << " arguments as referernces " << endl;
    int a = 2;
    int b = 4;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;

    // pass argument as pointers
    cout << "arguments as pointers" << endl;
    int x = 5;
    int y = 10;
    swapTwo(&x, &y);
    cout << x << endl;
    cout << y << endl;
}