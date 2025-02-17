#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i < 10){
        if (i == 4){
           break;
        }
        cout << i << "\n";
    
        i++;
    }

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    int cars_length = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < cars_length; i++){
        cout << cars[i] << "\n";
    }

    return 0;
}