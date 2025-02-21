#include <iostream>
#include <cmath>
using namespace std;

int integerSquareRoot(int num) {
    return static_cast<int>(sqrt(num));
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square root of " << num << " = " << integerSquareRoot(num) << endl;
    return 0;
}
