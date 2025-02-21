#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string binary;
    int decimal = 0;

    // Input the binary number
    cout << "Input a binary number: ";
    cin >> binary;

    // Convert binary to decimal
    for (int i = 0; i < binary.length(); i++) {
        if (binary[i] == '1') {
            decimal += pow(2, binary.length() - 1 - i);  // Calculate the decimal value
        }
    }

    // Output the decimal number
    cout << "The decimal number: " << decimal << endl;

    return 0;
}
