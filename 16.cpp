#include <iostream>
#include <tuple>
using namespace std;

int main() {
    // 1st is int, 2nd string, etc
    tuple <int, string> person(19, "Jonathan Lu");

    // accessing tuple
    cout << "access and change tuple" << endl;
    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;

    get<0>(person) = 20;
    get<1>(person) = "Thomas";

    cout << get<0>(person) << endl;
    cout << get<1>(person) << endl;

    // to create tuple after declaring it
    cout << "create tuple and give it stuff" << endl;
    tuple <int, char, bool, float> thing;

    // try access without any instantiation
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;
    cout << get<3>(thing) << endl;

    thing = make_tuple(19, 'M', true, 168.3);
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;
    cout << get<3>(thing) << endl;

    // swapping tuples
    cout << "swaps" << endl;
    tuple <int, int> t1(1, 2);
    tuple <int, int> t2(3, 4);

    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;

    // able swap
    t1.swap(t2);

    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;

    // decompose tuple, able get values out
    tuple <int, int> t3(5, 6);
    int x, y;

    cout << "tie function" << endl;
    tie(x, y) = t3;
    cout << x << endl;
    cout << y << endl;

    // concat
    tuple <int, char> t4(19, 'a');
    tuple <char, string> t5('b', "jonathan");

    tuple <int, char, char, string> t6 = tuple_cat(t4, t5);

    // automatically find type itll be
    auto t7 = tuple_cat(t4, t5);
    cout << "t6:" << endl;
    cout << get<0>(t6) << endl;
    cout << get<1>(t6) << endl;
    cout << get<2>(t6) << endl;
    cout << get<3>(t6) << endl;

    cout << "t7:" << endl;
    cout << get<0>(t7) << endl;
    cout << get<1>(t7) << endl;
    cout << get<2>(t7) << endl;
    cout << get<3>(t7) << endl;
}