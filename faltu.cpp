#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Current size: " << numbers.size() << std::endl;  // Output: Current size: 5

    numbers.resize(3,10);
    std::cout << "After resize: " << numbers.size() << std::endl;  // Output: After resize: 3

    numbers.resize(7,10);  // Resize and fill new elements with value 10
    std::cout << "After resize with initializer: " << numbers.size() << std::endl;  // Output: After resize with initializer: 7

    return 0;
}



 