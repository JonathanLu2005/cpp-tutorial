#include <iostream>
#include <string> 
using namespace std; 

int main() {
    string str = "indexing string";
    cout << str << " first letter is " << str[0] << " and fourth letter is " << str[3] << endl;

    str[0] = '0';
    str[3] = '3';

    cout << str << " after changing first and fourth letter " << endl;

    cout << "to iterate through the string" << endl;
    int i;
    for (i = 0; i < str.length(); i++) {
        char chr = str[i];

        cout << i << "th letter in " << str << " is " << chr << endl;
    }

    cout << "length of string is " << str.size() << endl;
}