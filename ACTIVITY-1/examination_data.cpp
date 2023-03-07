#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    char grade;

    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> rollNo;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];

    // Read data for each student
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter data for student " << i+1 << ":" << endl;
        students[i].readData();
    }

    // Display data for each student
    cout << "Data for all students:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << i+1 << ":" << endl;
        students[i].displayData();
        cout << endl;
    }

    return 0;
}
