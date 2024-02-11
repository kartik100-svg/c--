#include <iostream>
using namespace std;

void bitManipulation(int num1, int num2) {
    // Bitwise AND
    int bitwiseAnd = num1 & num2;

    // Bitwise OR
    int bitwiseOr = num1 | num2;

    // Bitwise XOR
    int bitwiseXor = num1 ^ num2;

    // Bitwise left shift
    int num1Shifted = num1 << 1;

    // Bitwise right shift
    int num2Shifted = num2 >> 1;

    cout << "Bitwise AND: " << bitwiseAnd << endl;
    cout << "Bitwise OR: " << bitwiseOr << endl;
    cout << "Bitwise XOR: " << bitwiseXor << endl;
    cout << "Bitwise left shift: " << num1Shifted << endl;
    cout << "Bitwise right shift: " << num2Shifted << endl;
}

int main() {
    int num1 = 10;  // Binary: 1010
    int num2 = 5;   // Binary: 0101

    cout << "Performing bit manipulation on " << num1 << " and " << num2 << ":" << endl;
    bitManipulation(num1, num2);

    return 0;
}
