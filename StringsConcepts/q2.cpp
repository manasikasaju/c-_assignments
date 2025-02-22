#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void capitalizeWords(string &str) {
    bool capitalize = true;
    for (char &ch : str) {
        if (capitalize && isalpha(ch)) {
            ch = toupper(ch);
            capitalize = false;
        } else if (ch == ' ') {
            capitalize = true;
        }
    }
}

int main() {
    string str;
    
    cout << "Input a string: ";
    getline(cin, str);
    
    capitalizeWords(str);
    
    cout << "Capitalized string: " << str << endl;
    
    return 0;
}
