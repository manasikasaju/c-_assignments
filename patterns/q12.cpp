#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Input number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int space = 0; space < i; space++) {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }
        for (int j = n - i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
