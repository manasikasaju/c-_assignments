#include <iostream>

using namespace std;

class Date {
private:
    int day, month, year;

    bool isLeapYear(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    int daysInMonth(int m, int y) {
        if (m < 1 || m > 12) return 0; 
        int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (m == 2 && isLeapYear(y)) return 29; 
        return daysPerMonth[m];
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) {
        setDate(d, m, y);
    }

    bool setDate(int d, int m, int y) {
        if (m >= 1 && m <= 12 && d >= 1 && d <= daysInMonth(m, y)) {
            day = d;
            month = m;
            year = y;
            return true;
        } else {
            cout << "Invalid date!" << endl;
            return false;
        }
    }

    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }

    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int d, m, y;

    cout << "Enter day: ";
    cin >> d;
    cout << "Enter month: ";
    cin >> m;
    cout << "Enter year: ";
    cin >> y;

    Date date;
    
    if (date.setDate(d, m, y)) {
        cout << "Valid date set successfully!" << endl;
        date.displayDate();
    } else {
        cout << "Failed to set date. Please enter a valid date." << endl;
    }

    return 0;
}
