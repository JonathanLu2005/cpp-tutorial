#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector - array, can dynamically change size, 

    // create vector
    vector<int> v1 = {1, 2, 3, 4};

    // access elements
    cout << "access elements" << endl;
    cout << v1.front() << endl;
    cout << v1[1] << endl;
    cout << v1.back() << endl;

    // size
    cout << "size" << endl;
    cout << v1.size() << endl;

    // capacity
    cout << "capacity" << endl;
    cout << v1.capacity() << endl;

    // append
    v1.push_back(5);
    cout << "capacity" << endl;
    cout << v1.capacity() << endl;

    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(9);

    // append elements lead to increase capacity without increasing size
    cout << "capacity" << endl;
    cout << v1.capacity() << endl;
    cout << "size" << endl;
    cout << v1.size() << endl;

    // pop from back
    cout << "pop from back" << endl;
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();

    // capacity dont decrease when remove element, only increase when add
    cout << "capacity" << endl;
    cout << v1.capacity() << endl;
    cout << "size" << endl;
    cout << v1.size() << endl;

    cout << "to decrease capacity" << endl;
    v1.shrink_to_fit();

    cout << "capacity" << endl;
    cout << v1.capacity() << endl;
    cout << "size" << endl;
    cout << v1.size() << endl;

    // insert
    cout << "inserting" << endl;

    vector<int> v2 = {1, 2, 3, 4};
    // insert at head
    v1.insert(v2.begin(), 5);
    // insert at index 1
    v1.insert(v2.begin() + 1, 6);

    cout << v2[0] << endl;
    cout << v2[1] << endl;

    // erase at speciifc indexes
    cout << "erase at speicifc indexes" << endl;
    v2.erase(v2.begin() + 1);
    v2.erase(v2.begin());

    cout << v2[0] << endl;
    cout << v2[1] << endl;

    // iterate vector
    cout << "iterate vector" << endl;
    vector<int> v3 = {1, 2, 3, 4};

    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << endl;
    }

    v3.insert(v3.begin() + 2, 10);

    for (auto itr = v3.begin(); itr != v3.end(); itr++) {
        cout << *itr << endl;
    }
}