#include <iostream>

using namespace std;

bool isPrime(int num, int divisor = 2) {
    if (num < 2) {
        return false;
    }
    if (divisor * divisor > num) {
        return true;
    }
    if (num % divisor == 0) {
        return false;
    }
    return isPrime(num, divisor + 1);
}

int sumOfPrimes(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (isPrime(start)) {
        return start + sumOfPrimes(start + 1, end);
    }
    return sumOfPrimes(start + 1, end);
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    int primeSum = sumOfPrimes(start, end);
    
    cout << "Sum of prime numbers in the range [" << start << ", " << end << "] is: " << primeSum << endl;
    
    return 0;
}
