#include <iostream>

using namespace std;

int sumEven(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 == 0) {
        return start + sumEven(start + 1, end);
    }
    return sumEven(start + 1, end);
}

int sumOdd(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 != 0) {
        return start + sumOdd(start + 1, end);
    }
    return sumOdd(start + 1, end);
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    int evenSum = sumEven(start, end);
    int oddSum = sumOdd(start, end);
    
    cout << "Sum of even numbers in the range [" << start << ", " << end << "] is: " << evenSum << endl;
    cout << "Sum of odd numbers in the range [" << start << ", " << end << "] is: " << oddSum << endl;
    
    return 0;
}
