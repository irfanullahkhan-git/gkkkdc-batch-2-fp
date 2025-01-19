#include <iostream>
using namespace std;

int power(int x, int y) {
	// Base case
    if (y == 0) {  
        return 1;
    } 
    // Recursive case
    x = x * power(x, y - 1);
    return x;
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    cout << base << " raised to the power of " << exponent << " is " << power(base, exponent);

    return 0;
}

