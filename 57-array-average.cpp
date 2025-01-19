//Average of Array Elements

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    float average = sum / size;

    cout << "The average of the array elements is: " << average << endl;
    return 0;
}

