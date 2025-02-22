#include <iostream>
#include <vector>

using namespace std;

vector<string> capitalizeFirstCharacter(vector<string>& vec) {
    for (string& word : vec) {
        if (!word.empty() && word[0] >= 'a' && word[0] <= 'z') {
            word[0] = word[0] - 'a' + 'A'; 
        }
    }
    return vec;
}

int main() {
    vector<string> vec = {"red", "green", "black", "white", "pink"};
    
    cout << "Original Vector elements: ";
    for (const string& word : vec) {
        cout << word << " ";
    }
    cout << endl;
    
    vector<string> capitalizedVec = capitalizeFirstCharacter(vec);
    
    cout << "Capitalize the first character of each vector element: ";
    for (const string& word : capitalizedVec) {
        cout << word << " ";
    }
    cout << endl;
    
    return 0;
}
