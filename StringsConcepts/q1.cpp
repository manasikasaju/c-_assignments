#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;
    
    cout << "Input a string: ";
    cin >> str;
    
    reversedStr = string(str.rbegin(), str.rend());
    
    cout << "Reversed string: " << reversedStr << endl;
    
    return 0;
}
