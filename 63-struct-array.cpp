#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    float height;
};

int main() {
    // Declare an array of Person structs
    Person people[3] = {
        {"Ali", 25, 5.7},
        {"Umar", 30, 6.0},
        {"Haris", 22, 5.8}
    };

    // Display the values of the struct members
    for (int i = 0; i < 3; ++i) {
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Height: " << people[i].height << " feet" << endl<<endl;
    }

    return 0;
}

