#include <iostream>
using namespace std;

// Function to calculate factorial recursively
int factorial(int n) {
	// Base case: if n is 0 or 1, return 1
    if (n <= 1) {  
        return 1;
    }
	// Recursive case: n * factorial of (n-1)
    n = n * factorial(n - 1);
    return n;
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "The factorial of " << number << " is " << factorial(number);
    return 0;
}

