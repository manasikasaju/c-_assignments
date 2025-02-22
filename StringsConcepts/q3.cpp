#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string findLargestWord(const string &str) {
    istringstream stream(str);
    string word, largestWord;
    
    while (stream >> word) {
        if (word.length() > largestWord.length()) {
            largestWord = word;
        }
    }
    return largestWord;
}

int main() {
    string str;
    
    cout << "Input a string: ";
    getline(cin, str);
    
    string largestWord = findLargestWord(str);
    
    cout << "Largest word: " << largestWord << endl;
    
    return 0;
}