#include <iostream>
using namespace std;

int main() {
    int marks;
    
    // Taking input from the user
    cout << "Enter your marks (out of 100): ";
    cin >> marks;
    
    // Determining the grade using if-else statements
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    
    return 0;
}