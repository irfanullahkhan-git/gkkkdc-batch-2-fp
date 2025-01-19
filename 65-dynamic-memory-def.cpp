/*
Dynamic memory: def:
Dynamic memory allocation in C++ allows you to allocate memory at runtime using pointers. 
This is useful when you don't know the exact size of an array or the amount of memory needed 
for an object until your program is running. The new and delete operators are used to manage dynamic memory.

new operator: Allocates memory on the heap.
delete operator: Deallocates memory that was previously allocated with new.

Example:
int* p = new int;
*/

#include <iostream>
using namespace std;

int main() {
    // Allocate memory for an integer in heap
    int* p = new int;
    *p = 10; // assign value to dynamic memory

    cout << "Value: " << *p << endl;
    // WHen you allocate memory then you must deallocate the memory
    delete p;

    return 0;
}

