// Copy Elements of One Array into Another Array

#include <iostream>
using namespace std;

int main() {
    int original[] = {1, 2, 3, 4, 5};
    int size = sizeof(original) / sizeof(original[0]);
    int copy[size];

    for (int i = 0; i < size; ++i) {
        copy[i] = original[i];
    }

    cout << "Elements of the original array: ";
    for (int i = 0; i < size; ++i) {
        cout << original[i] << " ";
    }
    cout << endl;

    cout << "Elements of the copied array: ";
    for (int i = 0; i < size; ++i) {
        cout << copy[i] << " ";
    }

    return 0;
}

