#include<iostream>
using namespace std;

class student {
    int rollNum;
    string name;  // Corrected the variable name to 'name'
    double fee;
public:
    student(int, string, double);    // Parameterized constructor
    student(const student& t);       // Copy constructor
    void display();
};

// Definition of parameterized constructor
student::student(int no, string n, double f) {
    rollNum = no;
    name = n;
    fee = f;
}

// Definition of copy constructor
student::student(const student& t) {
    rollNum = t.rollNum;
    name = t.name;
    fee = t.fee;
    cout << "Copy Constructor Called." << endl;
}

// Display function
void student::display() {
    cout << rollNum << "\t" << name << "\t" << fee << endl;
}

int main() {
    student s(192, "Rakib", 1000);  // Corrected the roll number (no leading zero)
    s.display();

    student s1 = s;  // This invokes the copy constructor
    s1.display();

    return 0;
}

