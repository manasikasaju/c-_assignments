#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    // Performing arithmetic operations
    cout << "Addition: " << (num1 + num2) << endl;
    cout << "Subtraction: " << (num1 - num2) << endl;
    cout << "Multiplication: " << (num1 * num2) << endl;
    
    // Handling division to avoid division by zero
    if (num2 != 0) {
        cout << "Division: " << (num1 / num2) << endl;
        cout << "Modulus: " << (num1 % num2) << endl;
    } else {
        cout << "Division and Modulus not possible (division by zero)." << endl;
    }
    
    return 0;
}
