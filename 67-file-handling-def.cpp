/*
File Handling: def:
File handling in C++ allows you to read from and write to files. 
This is done using file streams, which are provided by the <fstream> library. 
There are two main classes for file handling:

ifstream: Stands for input file stream and is used for reading files.
ofstream: Stands for output file stream and is used for writing files.
fstream: A class derived from both ifstream and ofstream that can be used 
for both reading and writing files.
*/

#include <iostream>
#include <fstream>
using namespace std;
// Program to write data into a file
int main() {
    // Create an ofstream object to write to a file
    ofstream outFile("example.txt");
    
    if (outFile.is_open()) { // Check if the file is open
        outFile << "Hello, world!" << endl;
        outFile << "This is a simple file write example." << endl;
        outFile.close(); // Close the file
        cout << "Data written to the file successfully." << endl;
    } else {
        cout << "Unable to open the file for writing." << endl;
    }

    return 0;
}



