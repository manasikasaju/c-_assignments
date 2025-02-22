#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != i) {
            return i;
        }
    }
    return size;
}

int main() {
    int arr[] = {0, 1, 2, 3, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "The smallest missing element is: " << findSmallestMissing(arr, size) << endl;
    return 0;
}
