#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    // Data members
    string name;
    int age;
    float marks;

    // Member function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Object creation
    Student s1;

    // Assigning values to object
    s1.name = "Arjun";
    s1.age = 20;
    s1.marks = 87.5;

    // Calling member function
    s1.display();

    return 0;
}

