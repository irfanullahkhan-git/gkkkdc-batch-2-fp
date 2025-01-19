// Allocating and Deallocating a Dynamic Array
#include <iostream>
using namespace std;

int main() {
    // Allocate memory for an array of integers
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* array = new int[size];

    // Assign values to the array
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1;
    }

    // Display the values of the array
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] array;

    return 0;
}

