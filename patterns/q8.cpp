#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Input the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
