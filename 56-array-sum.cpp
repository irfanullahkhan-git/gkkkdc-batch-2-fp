// Sum of All Elements in an Array
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    cout << "The sum of all elements in the array is: " << sum;
    return 0;
}

