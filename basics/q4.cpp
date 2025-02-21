#include <iostream>
using namespace std;

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int sumDigitsInRange(int start, int end) {
    int total = 0;
    for (int i = start; i <= end; i++) {
        total += sumDigits(i);
    }
    return total;
}

int main() {
    int start, end;
    cout << "Enter two numbers: ";
    cin >> start >> end;
    cout << "Sum of all digits between " << start << " and " << end << " is: " << sumDigitsInRange(start, end) << endl;
    return 0;
}
