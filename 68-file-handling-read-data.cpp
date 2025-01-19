#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an ifstream object to read from a file
    ifstream inFile("example.txt");
    string line;

    
    if (inFile.is_open()) { // Check if the file is open
        while (getline(inFile, line)) {
            cout << line << endl; // Print each line read from the file
        }
        inFile.close(); // Close the file
    } else {
        cout << "Unable to open the file for reading." << endl;
    }

    return 0;
}

