// #include<iostream>
// using namespace std;

// int main(){
//     int number=6;
//     int &numref=number;
//     cout<<numref<<endl;
//     return 0;
// }
#include <iostream>

int main() {
    int number = 5;
    int &numref = number;

    std::cout << "Original value: " << number << std::endl;  // Output: Original value: 5
    std::cout << "Reference value: " << numref << std::endl; // Output: Reference value: 5

    number = 10; // Modifying the reference variable

    std::cout << "Modified value: " << number << std::endl;  // Output: Modified value: 10
    std::cout << "Reference value: " << numref << std::endl; // Output: Reference value: 10

    return 0;
}
