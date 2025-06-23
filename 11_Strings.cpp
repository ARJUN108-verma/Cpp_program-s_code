#include <iostream>
#include <string> // Required for string operations

using namespace std;

int main() {
    // Declare and initialize a string
    string name = "Arjun";

    // Display the string
    cout << "Hello, " << name << "!" << endl;

    // Taking string input from the user
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName); // to take input with spaces

    // Display the entered full name
    cout << "Your full name is: " << fullName << endl;

    // String operations
    cout << "Length of your name: " << fullName.length() << endl;
    cout << "First character: " << fullName[0] << endl;

    // Modifying a string
    fullName[0] = toupper(fullName[0]); // Capitalize first letter
    cout << "Modified full name: " << fullName << endl;

    return 0;
}

