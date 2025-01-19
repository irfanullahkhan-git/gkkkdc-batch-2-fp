/*
def: a function that calls itself in order to solve a problem.
two parts of recursive function:
1: Base or Termination Condition: The condition under which the function stops calling itself and returns a result.
2: Recursive Case: The part of the function where it calls itself with a smaller or simpler input to gradually work toward the base case.
*/

/*
Rolling and Unrolling:
-Rolling: When a recursive function calls itself, it "rolls" into a deeper level of recursion. 
Each recursive call adds a new layer to the call stack.

-Unrolling: When the base case of a recursive function is reached, 
the function starts returning and "unrolling" back through the previous calls, 
gradually reducing the layers in the call stack until it returns to the original call.
*/
#include <iostream>
using namespace std;

/*
this functioncalculates the sum of the first 
n natural numbers (1+2+3+....+n) recursively
*/
int sum(int n) {
	if(n > 1){ // this is base or termination condition
		n = n + sum(n - 1); // recursive case, where the function calls itself
	}
	return n;
}

int main() {
    int number;
    cout << "Enter a positive integer greater than 0: ";
    cin >> number;
    int result;
	result = sum(number);
    cout<<"The sum of first "<<number<<" natural numbers is: "<< result;
    return 0;
}

