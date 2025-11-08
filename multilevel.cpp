#include <iostream>
using namespace std;

// Base class
class Student {
public:
    void getStudentInfo() {
        cout << "Name: Hari Priya" << endl;
        cout << "Roll No: 101" << endl;
    }
};

// Derived class 1 (inherits from Student)
class Marks : public Student {
public:
    void getMarks() {
        cout << "Marks in English: 85" << endl;
        cout << "Marks in Math: 90" << endl;
    }
};

// Derived class 2 (inherits from Marks)
class Result : public Marks {
public:
    void displayResult() {
        int total = 85 + 90;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << total / 2.0 << endl;
    }
};

// Main function
int main() {
    Result r;
    r.getStudentInfo(); // from Student
    r.getMarks(); // from Marks
    r.displayResult(); // from Result
    return 0;
}

