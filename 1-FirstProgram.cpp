// Library to print info to console, namespace get access to standard library
#include <iostream>
// Specify namespace so we can use cout, namespace are areas of code, or specify in code e.g std::cout, so we can get cout
using namespace std;

// Function, entry point of cpp program, ran first, specifically need to be main to start
int main() {
    // << stream insertion operator, used with cout, to provide text
    // Can use many << to include more
    // use endl or \n for white space
    cout << "Hello!" << "Jonathan" << endl << endl;
    cout << "Hello!" << "Tutorial \n";
    return 0;
}

