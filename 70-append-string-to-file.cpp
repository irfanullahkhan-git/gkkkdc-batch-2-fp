#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Append to a file
    ofstream outFile("example.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Appending a new line to the file." << endl;
        outFile.close();
        cout << "Data appended to the file successfully." << endl;
    } else {
        cout << "Unable to open the file for appending." << endl;
    }

    return 0;
}

