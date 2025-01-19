// Finding the Largest Element in an Array
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 5, 30, 15};
    int max = numbers[0];

    for (int i = 1; i < 5; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    cout << "The largest element is: " << max << endl;

    return 0;
}

