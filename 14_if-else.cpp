#include <iostream>
using namespace std;

int main() {
    int number;

    // Input from user
    cout << "Enter a number: ";
    cin >> number;

    // if-else condition
    if (number > 0) {
        cout << "The number is positive." << endl;
    }
    else if (number < 0) {
        cout << "The number is negative." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

