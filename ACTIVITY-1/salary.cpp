#include <iostream>
using namespace std;

class EMPLOYEE {
public:
    int Employeenumber;
    string Employeename;
    double Basic;
    double DA;
    double IT;
    double NetSalary;

    void printData() {
        cout << "Employee number: " << Employeenumber << endl;
        cout << "Employee name: " << Employeename << endl;
        cout << "Basic: " << Basic << endl;
        cout << "DA: " << DA << endl;
        cout << "IT: " << IT << endl;
        cout << "Net Salary: " << NetSalary << endl;
    }

    void calculateNetSalary() {
        DA = 0.5 * Basic;
        double grossSalary = Basic + DA;
        IT = 0.1 * grossSalary;
        NetSalary = grossSalary - IT;
    }
};

int main() {
    EMPLOYEE employee1;
    employee1.Employeenumber = 123;
    employee1.Employeename = "John";
    employee1.Basic = 50000;
    employee1.calculateNetSalary();
    employee1.printData();

    return 0;
}
