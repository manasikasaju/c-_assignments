#include <iostream>
using namespace std;

int main() {
    int day;
    
    // Taking input from the user
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    
    // Using switch statement to determine the day
    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid input! Please enter a number between 1 and 7.";
    }
    
    return 0;
}
