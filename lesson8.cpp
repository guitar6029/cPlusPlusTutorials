#include <iostream>

int main() {
    int* ptr = new int(42); // Dynamically allocate memory

    // Display value and address
    std::cout << "The value of ptr is : " << *ptr << std::endl;
    std::cout << "The address of ptr is : " << ptr << std::endl;

    // Free allocated memory
    delete ptr;
    ptr = nullptr; // Set pointer to nullptr after deletion

    std::cout << "Pointer after deletion: " << ptr << std::endl;

    return 0;
}
