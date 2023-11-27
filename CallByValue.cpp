#include <iostream>

using namespace std;

// Function definition with call by value
void incrementByValue(int num) {
    num++;
}

int main() {
    int value = 10;

    cout << "Original value: " << value << endl;

    // Calling the function with call by value
    incrementByValue(value);

    cout << "Value after increment: " << value << endl;

    return 0;
}
