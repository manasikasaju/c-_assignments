#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int studentClass;
    int rollNumber;
    float marks;
    
    char calculateGrade() {
        if (marks >= 90) return 'A';
        if (marks >= 80) return 'B';
        if (marks >= 70) return 'C';
        if (marks >= 60) return 'D';
        if (marks >= 50) return 'E';
        return 'F';
    }

public:
    Student(string n, int c, int r, float m) {
        name = n;
        studentClass = c;
        rollNumber = r;
        marks = m;
    }

    void displayInfo() {
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    string name;
    int studentClass, rollNumber;
    float marks;

    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Class: ";
    cin >> studentClass;
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cout << "Enter Marks: ";
    cin >> marks;

    Student student(name, studentClass, rollNumber, marks);
    
    student.displayInfo();

    return 0;
}
