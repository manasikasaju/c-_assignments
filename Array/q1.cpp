#include <iostream>
#include <limits.h>
using namespace std;

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        cout << "Array must have at least three elements." << endl;
        return;
    }
    
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }
    
    cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    findLargestThree(arr, n);
    
    return 0;
}
