#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;

    // Input two numbers from user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform basic math operations
    cout << "\nMath Operations:" << endl;
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    // Check for division by zero
    if (num2 != 0) {
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        cout << num1 << " % " << num2 << " = " << (num1 % num2) << endl;
    } else {
        cout << "Division and modulus by zero is not allowed!" << endl;
    }

    return 0;
}

