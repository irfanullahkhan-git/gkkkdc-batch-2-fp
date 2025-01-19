#include <iostream>
using namespace std;

int fibonacci(int n) {
	// Base case
    if (n <= 1) {  
        return n;
    }
	// Recursive case       
	n = fibonacci(n - 1) + fibonacci(n - 2);
    return n;
}

void printFibonacciSequence(int n) {
    for (int i = 0; i <= n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
	printFibonacciSequence(number);
	return 0;
}

