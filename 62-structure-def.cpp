/*
Structure: def:
Structure or struct in C++ is a user-defined data type that allows you to group variables 
of different data types together under a single name. 
It is useful for representing a record or a composite data type, 
such as a book, a point in 2D space, or an employee.

Example:
struct Person {
    string name;
    int age;
    float height;
};

*/

#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    // Declare and initialize a variable of type Person
    Person person1;
    person1.name = "Ali";
    person1.age = 25;
    person1.height = 5.7;

    // Display the values of the struct members
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " feet";

    return 0;
}

