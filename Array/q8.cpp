#include <iostream>
#include <algorithm>
using namespace std;

void findSecondLowestAndHighest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }
    
    sort(arr, arr + size);
    
    int secondLowest = arr[0], secondHighest = arr[size - 1];
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[0]) {
            secondLowest = arr[i];
            break;
        }
    }
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] < arr[size - 1]) {
            secondHighest = arr[i];
            break;
        }
    }
    
    cout << "Second Lowest: " << secondLowest << endl;
    cout << "Second Highest: " << secondHighest << endl;
}

int main() {
    int arr[] = {5, 1, 9, 3, 2, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findSecondLowestAndHighest(arr, size);
    
    return 0;
}
