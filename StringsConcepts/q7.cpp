#include <iostream>
using namespace std;

string removeCharacter(const string &str, char ch) {
    string result = "";
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    return result;
}

int main() {
    string str;
    char ch;
    
    cout << "Input a string: ";
    getline(cin, str);
    
    cout << "Input a character to remove: ";
    cin >> ch;
    
    cout << "Updated string: " << removeCharacter(str, ch) << endl;
    
    return 0;
}
