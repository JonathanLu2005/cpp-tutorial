#include <iostream>
#include <map>
using namespace std;

int main() {
    // crate
    map<char, int> map1 = {
        {'A', 1},
        {'B', 2},
        {'C', 3}
    };

    // access
    cout << "to access map" << endl;
    cout << map1['A'] << endl;
    cout << map1['B'] << endl;

    cout << "try access where key dont exist" << endl;
    cout << map1['D'] << endl;

    // add
    cout << "to add to map" << endl;
    map1['D'] = 4;
    cout << map1['D'] << endl;

    map1.insert(pair<char, int>('E', 5));
    cout << map1['E'] << endl;

    // pairs
    cout << "create pair to add to map" << endl;
    pair<char, int> pair1('F', 6);
    map1.insert(pair1);
    cout << pair1.first << endl;
    cout << pair1.second << endl;
    cout << map1['F'] << endl;

    // erase
    cout << "to erase element" << endl;

    map1.erase(pair1.first);
    cout << map1['F'] << endl;

    // size of map
    cout << "map size" << endl;
    cout << map1.size() << endl;

    // loop through map
    // arg1, give iterator, loop through map, iterator tell if we reached the end of map in 2nd arg
    // given pointer to all pairs, is itr, need dereference pointer
    for (map<char, int>::iterator itr = map1.begin(); itr != map1.end(); ++itr) {
        // derefernece, no longer a pointer, now object
        cout << (*itr).first << endl;
        cout << (*itr).second << endl;

        // sugar version
        cout << itr->first << endl;
        cout << itr->second << endl;
    }

    cout << "is it empty?" << endl;
    cout << map1.empty() << endl;

    // erase entire map
    map1.clear();
    cout << "erase map" << endl;
    cout << map1.empty() << endl;
}