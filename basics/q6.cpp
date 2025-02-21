#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = a + b;
    cout << "Sum: " << sum << endl;
    cout << "Number of digits in sum: " << countDigits(sum) << endl;
    return 0;
}
