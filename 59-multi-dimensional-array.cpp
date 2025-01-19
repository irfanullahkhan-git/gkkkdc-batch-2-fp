/*
Multi Dimensional Array: def: 
a multi-dimensional array can be thought of as a table with rows and columns, 
where each element of the array is itself an array. 
The most common multi-dimensional array is the two-dimensional array, 
but you can have arrays with more dimensions as well.
Exampel: 
int matrix[3][3]; // Declares a 2D array of 3x3 integers
*/

#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    cout << "Elements of the 2D array:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

