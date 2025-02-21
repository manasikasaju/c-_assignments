#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    
    // Input an 8-bit binary number
    cout << "Input a 8 bit binary value: ";
    cin >> binary;
    
    // Check if the input is valid (8-bit binary number)
    if (binary.length() != 8 || binary.find_first_not_of("01") != string::npos) {
        cout << "Please enter a valid 8-bit binary number!" << endl;
        return 1;
    }

    cout << "The original binary = " << binary << endl;

    // Finding the one's complement
    for (int i = 0; i < 8; i++) {
        binary[i] = (binary[i] == '0') ? '1' : '0';
    }

    cout << "After ones complement the number = " << binary << endl;
    
    return 0;
}
