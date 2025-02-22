#include <iostream>
#include <unordered_set>
using namespace std;

int findFirstRepeating(int arr[], int size) {
    unordered_set<int> seen;
    for (int i = 0; i < size; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];
        }
        seen.insert(arr[i]);
    }
    return -1; // Return -1 if no repeating element is found
}

int main() {
    int arr[] = {4, 2, 4, 5, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int firstRepeating = findFirstRepeating(arr, size);
    if (firstRepeating != -1) {
        cout << "First repeating element: " << firstRepeating << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }
    
    return 0;
}
