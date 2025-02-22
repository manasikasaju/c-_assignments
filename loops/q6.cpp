#include <iostream>
using namespace std;

void displayCubes(int n) {
    for (int i = 1; i <= n; i++) {
        cout << "Number is : " << i << " and the cube of " << i << " is: " << (i * i * i) << endl;
    }
}

int main() {
    int n;
    cout << "Input the number of terms : ";
    cin >> n;
    displayCubes(n);
    return 0;
}