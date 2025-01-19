// 3D Array Initialization and Access
#include <iostream>
using namespace std;

int main() {
    int array3D[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    cout << "Elements of the 3D array:" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << array3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

