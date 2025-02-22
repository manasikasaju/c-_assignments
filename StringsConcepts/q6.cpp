#include <iostream>
#include <vector>
using namespace std;

string convertToWords(int num) {
    vector<string> belowTwenty = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    vector<string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    
    if (num < 20) return belowTwenty[num];
    else if (num < 100) return tens[num / 10] + (num % 10 ? " " + belowTwenty[num % 10] : "");
    
    return "Out of range";
}

int main() {
    int num;
    cout << "Input a number: ";
    cin >> num;
    
    if (num < 0 || num >= 100) {
        cout << "Number out of supported range (0-99)" << endl;
    } else {
        cout << "Output: " << convertToWords(num) << endl;
    }
    
    return 0;
}