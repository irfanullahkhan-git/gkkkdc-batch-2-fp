#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string line;

    // Write to a file
    ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Line 1: Hello, world!" << endl;
        outFile << "Line 2: Writing to the file." << endl;
        outFile.close();
    } else {
        cout << "Unable to open the file for writing." << endl;
    }

    // Read from the file
    ifstream inFile("example.txt");
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open the file for reading." << endl;
    }

    return 0;
}

