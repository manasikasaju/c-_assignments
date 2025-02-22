#include <iostream>
#include <vector>

using namespace std;

vector<string> findStringsWithNumbers(const vector<string>& vec) {
    vector<string> result;
    
    for (const string& word : vec) {
        for (char ch : word) {
            if (ch >= '0' && ch <= '9') {
                result.push_back(word);
                break; 
            }
        }
    }
    
    return result;
}

int main() {
    vector<string> vec = {"red", "green23", "1black", "white"};
    
    cout << "Original Vector elements: ";
    for (const string& word : vec) {
        cout << word << " ";
    }
    cout << endl;
    
    vector<string> stringsWithNumbers = findStringsWithNumbers(vec);
    
    cout << "Find strings that contain a number(s) from the said vector: ";
    if (stringsWithNumbers.empty()) {
        cout << "None" << endl;
    } else {
        for (const string& word : stringsWithNumbers) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
}
