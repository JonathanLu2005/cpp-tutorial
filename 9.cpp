#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr1[5];
    int arr2[5] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 5};
    int arr4[5] {1, 2, 3, 4, 5};

    cout << "memory location of array " << arr1 << endl;

    cout << "first element of array " << arr2[0] << endl;
    cout << "second element of array " << arr2[1] << endl;
    cout << "third element of array " << arr2[2] << endl;

    arr2[0] = 10;
    cout << "first element of array is changed to 10 " << arr2[0] << endl;

    cout << "if we access an array without any elements, will spit random elements " << arr1[0] << endl;

    string arr5[] {"jonathan", "Learning", "cpp"};
    float arr6[] {1.1, 2.2, 3.3};

    cout << "size of my string array is, size returns total bytes " << sizeof(arr5) << endl;
    cout << "size of my float array is, size return total bytes " << sizeof(arr6) << endl;
    cout << "size of my int array is, size return total bytes " << sizeof(arr2) << endl;
}