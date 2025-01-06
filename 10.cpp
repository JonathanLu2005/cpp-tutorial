#include <iostream>
#include <string>
using namespace std;

int main() {
    int i;

    for (i = 0; i < 3; i++) {
        cout << "should print something out 3 times " << endl;
    }

    for (i = 0; i < 3; ++i) {
        cout << "print something out this 3 times too " << endl;
    }

    cout << "print numbres from 0 to 10" << endl;
    for (i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    int arr1[] {1, 2, 3, 4, 5};
    cout << "access all my elements in my array arr1" << endl;
    for (i = 0; i < 5; i++) {
        cout << arr1[i] << endl;
    }
}