#include <iostream> // Include the input-output stream library

using namespace std; // Use the standard namespace

int main() {
    // Declare and initialize variables of different data types
    int num = 10;
    float decimal = 5.5f;
    char letter = 'A';
    double largeDecimal = 15.123456;
    bool isTrue = true;

    // Print values and their sizes using sizeof()
    cout << "Integer: " << num << ", Size: " << sizeof(num) << " bytes" << endl;
    cout << "Float: " << decimal << ", Size: " << sizeof(decimal) << " bytes" << endl;
    cout << "Character: " << letter << ", Size: " << sizeof(letter) << " bytes" << endl;
    cout << "Double: " << largeDecimal << ", Size: " << sizeof(largeDecimal) << " bytes" << endl;
    cout << "Boolean: " << isTrue << ", Size: " << sizeof(isTrue) << " bytes" << endl;

    return 0; // Indicate successful program termination
}
