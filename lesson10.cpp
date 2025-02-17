#include <iostream>
using namespace std;

//define a structure for a Car
struct Car {
    string brand;
    string model;
    int year;
};

int main() {
    // create an instance of the car structure and initilaize members
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2022;


    //access and print the members fo the structure
    cout << "Card Brand: " << car1.brand << "\n";
    cout << "Car Model: " << car1.model << "\n";
    cout << "Car Year: " << car1.year << "\n";

    return 0;
}