#include <iostream>
using namespace std;

void updateArray(int arr[], int size) {
    if (size <= 1) return; 
    
    int prev = arr[0];
    arr[0] = arr[0] * arr[1];
    
    for (int i = 1; i < size - 1; i++) {
        int curr = arr[i];
        arr[i] = prev * arr[i + 1];
        prev = curr;
    }
    
    arr[size - 1] = prev * arr[size - 1];
}

int main() {
    int arr[] = {2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    updateArray(arr, size);
    
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
