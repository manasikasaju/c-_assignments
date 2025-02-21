#include <iostream>
using namespace std;

int main() {
    int decimal;
    string binary = "";

    // Input the decimal number
    cout << "Input a decimal number: ";
    cin >> decimal;

    // Convert decimal to binary
    while (decimal > 0) {
        binary = char(decimal % 2 + '0') + binary;  // Get the binary digit
        decimal /= 2;  // Divide by 2
    }

    // Output the binary number
    cout << "The binary number is: " << binary << endl;

    return 0;
}
