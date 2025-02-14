#include <iostream>
int main() {
    for (int i = 0; i <= 5; i++){
        std::cout << "Current index: " << i << std::endl;
    }   
    
    int myTotal = 10;

    while ( myTotal <= 30) {
        std::cout << "Current Total: " << myTotal << std::endl;
        myTotal += 5;
    }

    return 0;
}