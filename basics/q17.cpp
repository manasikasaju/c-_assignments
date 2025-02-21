#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;

    // Input an 8-bit binary number
    cout << "Input a 8 bit binary value: ";
    cin >> binary;
    
    // Check if the input is valid
    if (binary.length() != 8 || binary.find_first_not_of("01") != string::npos) {
        cout << "Please enter a valid 8-bit binary number!" << endl;
        return 1;
    }

    cout << "The original binary = " << binary << endl;

    // Find the one's complement
    for (int i = 0; i < 8; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }
    cout << "After ones complement the value = " << binary << endl;

    // Find the two's complement by adding 1 to the one's complement
    for (int i = 7; i >= 0; i--) {
        if (binary[i] == '0') {
            binary[i] = '1';
            break;
        } else {
            binary[i] = '0';
        }
    }

    cout << "After twos complement the value = " << binary << endl;

    return 0;
}
