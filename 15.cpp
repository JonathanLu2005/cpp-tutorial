// pointer store memory address location, point to box another variable points to, and when we do reference, point to same box aka memory location
// when we use pointer, it stores the memory address, with a new memory location, that stores the address, and get memory address
// so pointer just store the memory address, reference uses the same value as like a link - an alias
// if we want to mdoify value pointer is pointing to, we gotta dereference it, aka get the memory address location, 

#include <iostream>
using namespace std;

int main() {
    int x = 2;
    int *y = &x;

    cout << x << endl;

    // memory address
    cout << &x << endl;
    cout << y << endl;

    // but y have own memory address, just storing x memory address
    cout << &y << endl;

    // pointer rules, dont need to initialise it and can set it to null
    int *z;
    int *k = NULL;

    // cant change what reference references, but pointer can be redefined
    k = &x;
    cout << &x << endl;
    cout << k << endl;

    // pointer airthmetics with array
    int arr[] = {1, 2, 3};
    int *head = arr;

    cout << head << endl;

    head = &arr[0];
    cout << head << endl;

    head = arr;

    // loop through array with just pointers
    for (int i = 0; i < 3; ++i) {
        head = arr + i;
        cout << head << endl;
        cout << *head << endl;
    }
}