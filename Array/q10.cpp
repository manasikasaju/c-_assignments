#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countOccurrences(const vector<int>& arr, int target) {
    return count(arr.begin(), arr.end(), target);
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5, 5, 5, 5, 6};
    int target = 5;
    
    int occurrences = countOccurrences(arr, target);
    cout << "Number " << target << " occurs " << occurrences << " times in the array." << endl;
    
    return 0;
}
