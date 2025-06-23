#include <iostream>
using namespace std;

int main() {
    bool isTrue = true;
    bool isFalse = false;

    cout << "Boolean value of isTrue: " << isTrue << endl;
    cout << "Boolean value of isFalse: " << isFalse << endl;

    // You can also use conditions to generate boolean values
    int a = 10;
    int b = 5;
    bool result = a > b;

    cout << "Result of (a > b): " << result << endl;

    // Show bool as true/false instead of 1/0
    cout << boolalpha; // This enables printing as 'true' or 'false'
    cout << "Using boolalpha - isTrue: " << isTrue << endl;
    cout << "Using boolalpha - isFalse: " << isFalse << endl;

    return 0;
}

