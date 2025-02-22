#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary) {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    void setSalaryBasedOnPerformance(char performanceGrade) {
        double percentageIncrease = 0;

        switch (performanceGrade) {
            case 'A': 
                percentageIncrease = 0.20; 
                break; 
            case 'B': 
                percentageIncrease = 0.10; 
                break; 
            case 'C':
                percentageIncrease = 0.05; 
                break;
            case 'D': 
                percentageIncrease = 0.02; 
                break;

            default: percentageIncrease = 0; 
        }

        salary += salary * percentageIncrease;
    }

    void displayEmployeeDetails() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    string name;
    int id;
    double salary;
    char grade;

    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Salary: ";
    cin >> salary;
    cout << "Enter Employee Performance Grade (A, B, C, D, or F): ";
    cin >> grade;

    Employee emp(name, id, salary);

    emp.setSalaryBasedOnPerformance(grade);

    cout << "\nUpdated Employee Details:" << endl;
    emp.displayEmployeeDetails();

    return 0;
}
