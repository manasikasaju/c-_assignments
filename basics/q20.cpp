#include <iostream>
using namespace std;

int main() {
    int decimal;
    string hex = "";
    char hexDigits[] = "0123456789ABCDEF";  // Hexadecimal digits

    // Input the decimal number
    cout << "Input a decimal number: ";
    cin >> decimal;

    // Convert decimal to hexadecimal
    while (decimal > 0) {
        hex = hexDigits[decimal % 16] + hex;  // Get the corresponding hex digit
        decimal /= 16;  // Divide by 16
    }

    // Output the hexadecimal number
    cout << "The hexadecimal number is : " << hex << endl;

    return 0;
}
