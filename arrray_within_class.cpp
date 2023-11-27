#include <iostream>
using namespace std;
class MyClass
{
public:
int myArray[5]; // Array as a member variable
void printArray() 
{
        for (int i = 0; i < 5; i++) 
        {
            cout<<myArray[i] << " ";
        }
}
};

int main() 
{
    MyClass obj;

    // Initializing the array
    for (int i = 0; i < 5; ++i)
    {
        obj.myArray[i] = i * 2;
    }

    // Accessing and printing the array through the class method
    obj.printArray();

    return 0;
}
