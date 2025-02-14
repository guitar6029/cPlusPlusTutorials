#include <iostream>
#include <vector>
int main(){
    int numbers[5] = {1,2,3,4,5};

    std::cout << "First element : " << numbers[0] << std::endl;
    std::cout << "Second element : " << numbers[1] << std::endl;


    numbers[3] = 100;

    std::cout << "Fourth element : " << numbers[3] << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << numbers[i] << std::endl;
    }

    // multi dimensional array
    int matrix[2][3] = { {1,2,3}, {4,5,6}};

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::vector<int> nums = {10,20,30};

    //to add element
    nums.push_back(40);
    nums.push_back(56);

    //to remove element
    nums.pop_back();

    for (int i = 0; i < nums.size(); i++){
        std::cout << "Current value in the index : " << nums[i] << std::endl;
    }

    //delete entire vector
    nums.clear();

    std::cout << "Size of the nums vector : " << nums.size() << std::endl; 


    return 0;
}