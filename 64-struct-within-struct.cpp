#include <iostream>
using namespace std;

struct Address {
    string city;
    string state;
    int zipCode;
};

struct Person {
    string name;
    int age;
    Address address;
};

int main() {
    // Declare and initialize a variable of type Person
    Person person1;
    person1.name = "Ali";
    person1.age = 25;
    person1.address.city = "Nowshera";
    person1.address.state = "KPK";
    person1.address.zipCode = 1000;

    // Display the values of the struct members
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "City: " << person1.address.city << endl;
    cout << "State: " << person1.address.state << endl;
    cout << "ZIP Code: " << person1.address.zipCode << endl;

    return 0;
}

