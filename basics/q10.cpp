#include <iostream>
using namespace std;

int sumDigits(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Final single-digit sum: " << sumDigits(num) << endl;
    return 0;
}
