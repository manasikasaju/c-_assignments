#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    
    cout << "Input a string: ";
    cin >> str;
    
    if (isPalindrome(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
