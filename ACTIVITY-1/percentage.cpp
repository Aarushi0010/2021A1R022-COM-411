#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 3; // number of students

class Student {
private:
    int rollNo;
    string name;
    string subjects[3];
    int maxMarks[3];
    int minMarks[3];
    int obtainMarks[3];
public:
    void setData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
        for (int i = 0; i < 3; i++) {
            cout << "Enter name of subject " << i+1 << ": ";
            cin >> subjects[i];
            cout << "Enter maximum marks of subject " << i+1 << ": ";
            cin >> maxMarks[i];
            cout << "Enter minimum marks of subject " << i+1 << ": ";
            cin >> minMarks[i];
            cout << "Enter obtain marks of subject " << i+1 << ": ";
            cin >> obtainMarks[i];
        }
    }
    void displayResult() {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        float totalMarks = 0;
        for (int i = 0; i < 3; i++) {
            cout << subjects[i] << ": " << obtainMarks[i] << "/" << maxMarks[i] << endl;
            totalMarks += obtainMarks[i];
        }
        float percentage = (totalMarks / (3 * 100)) * 100;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << endl;
    }
};

int main() {
    Student students[NUM_STUDENTS];
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter data for student " << i+1 << ":" << endl;
        students[i].setData();
    }
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Result of student " << i+1 << ":" << endl;
        students[i].displayResult();
    }
    return 0;
}
