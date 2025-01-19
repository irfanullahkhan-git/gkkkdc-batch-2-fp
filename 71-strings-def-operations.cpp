/*
String: def:
In C++, a string is an array of characters. 
The C++ Standard Library provides a string class type that supports various operations 
on strings such as concatenation, comparison, and searching. 
The string class is included in the <string> header file.
--
Extras:
1: string::npos 
when you use the find method to search for a substring or character in a string, 
if the substring or character is not found, the method returns string::npos

2: char[] and std::string are two different ways to handle and manipulate strings.
char str[] = "Hello World";
string str = "Hello WOrld";
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize strings
    string str1 = "Hello";
    string str2 = "World";
    string str3;

    // Concatenation
    str3 = str1 + " " + str2;
    cout << "Concatenated string: " << str3 << endl;

    // Length of the string
    cout << "Length of str3: " << str3.length() << endl;

    // Comparison
    if (str1 == str2) {
        cout << "str1 and str2 are equal." << endl;
    } else {
        cout << "str1 and str2 are not equal." << endl;
    }

    // Substring
    string subStr = str3.substr(6, 5); // Extract "World" from "Hello World"
    cout << "Substring: " << subStr << endl;

    // Find a character or substring
    size_t found = str3.find("World");
    if (found != string::npos) {
        cout << "'World' found at position: " << found << endl;
    } else {
        cout << "'World' not found." << endl;
    }

    // Convert string to C-style string
    const char* cStr = str3.c_str();
    cout << "C-style string: " << cStr << endl;

    // Modify string
    str3[0] = 'h'; // Change 'H' to 'h'
    cout << "Modified string: " << str3 << endl;

    return 0;
}

