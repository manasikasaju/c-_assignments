#include <iostream>
using namespace std;

void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        return;
    }
    int largest = arr[0], secondLargest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (largest == secondLargest)
        cout << "No second largest element found." << endl;
    else
        cout << "The second largest element is: " << secondLargest << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    findSecondLargest(arr, size);
    return 0;
}