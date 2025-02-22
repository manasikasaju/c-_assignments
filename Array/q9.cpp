#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void findThirdLargestString(vector<string>& arr) {
    if (arr.size() < 3) {
        cout << "Array must have at least three elements." << endl;
        return;
    }
    
    sort(arr.begin(), arr.end(), [](const string& a, const string& b) {
        return a > b;
    });
    
    cout << "Third Largest String: " << arr[2] << endl;
}

int main() {
    vector<string> arr = {"apple", "banana", "cherry", "date", "elderberry"};
    
    findThirdLargestString(arr);
    
    return 0;
