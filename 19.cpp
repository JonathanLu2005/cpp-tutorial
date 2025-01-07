#include <iostream>
#include <set>
using namespace std;

int main() {
    // create set
    set<char> s1 = {'a', 'b', 'a', 'b'};

    // insert
    s1.insert('c');

    // erase
    s1.erase('a');

    // check if element exist
    if (s1.find('a') == s1.end()) {
        cout << "cant find a" << endl;
    } else {
        cout << "found a" << endl;
    }

    if (s1.find('c') == s1.end()) {
        cout << "cant find c" << endl;
    } else {
        cout << "found c" << endl;
    }

    // itereate set
    cout << "iterate set" << endl;
    for (auto itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << endl;
    }
}