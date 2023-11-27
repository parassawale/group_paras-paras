#include <iostream>

using namespace std;

// Function definition with call by reference.
void incrementByReference(int &num) {
    num++;
}

int main() {
    int value = 10;

    cout << "Original value: " << value << endl;

    // Calling the function with call by reference
    incrementByReference(value);
    
    cout << "Value after increment: " << value << endl;

    return 0;
}
