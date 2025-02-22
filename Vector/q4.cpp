#include <iostream>
#include <vector>

using namespace std;

bool containsAllLetters(const string& first, const string& second) {
    vector<bool> found(256, false); 
    for (char ch : first) {
        found[ch] = true;
    }
    for (char ch : second) {
        if (!found[ch]) {
            return false;
        }
    }

    return true;
}

int main() {
    string first, second;
    
    cout << "Enter the first string: ";
    getline(cin, first);
    
    cout << "Enter the second string: ";
    getline(cin, second);
    
    bool result = containsAllLetters(first, second);
    
    cout << "Check - First string contains all letters from second string: " << (result ? "true" : "false") << endl;
    
    return 0;
}
