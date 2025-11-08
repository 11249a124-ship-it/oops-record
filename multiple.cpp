#include <iostream>
using namespace std;

// Base class 1
class Student {
public:
    void getStudentInfo() {
        cout << "Name: Hari Priya" << endl;
        cout << "Roll No: 101" << endl;
    }
};

// Base class 2
class Marks {
public:
    void getMarks() {
        cout << "Marks in English: 85" << endl;
        cout << "Marks in Math: 90" << endl;
    }
};

// Derived class inheriting from both Student and Marks
class Result : public Student, public Marks {
public:
    void displayResult() {
        cout << "Total Marks: " << 85 + 90 << endl;
    }
};

// Main function
int main() {
    Result r;
    r.getStudentInfo(); // from Student class
    r.getMarks(); // from Marks class
    r.displayResult(); // from Result class
    return 0;
}
