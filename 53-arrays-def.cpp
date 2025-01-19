/*
Arrays: def: 
1: An array is a data structure in C++ 
2: that stores a fixed-size sequence of elements of the same type. 
3: The elements are stored in contiguous memory locations, which allows efficient access to individual elements using an index. 
4: The index of the first element is 0, and the index of the last element is size-1

example: int numbers[5]; // Declares an array of 5 integers

*/
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }
    return 0;
}

