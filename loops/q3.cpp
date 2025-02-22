#include <iostream>
using namespace std;

int sumSeries(int n) {
    int sum = 0, term = 0;
    for (int i = 0; i < n; i++) {
        term = term * 10 + 1;
        sum += term;
        cout << term;
        if (i < n - 1) cout << " + ";
    }
    cout << "\nThe sum of the series is: " << sum << endl;
    return sum;
}

int main() {
    int n;
    cout << "Input number of terms: ";
    cin >> n;
    sumSeries(n);
    return 0;
}