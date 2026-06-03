#include<iostream>
using namespace std;

class student {

private:
    string name;
    int age;

public:

    // Setter for age
    void setage(int a) {
        age = a;
    }

    // Getter for age
    int getage() {
        return age;
    }

    // Setter for name
    void setname(string n) {
        name = n;
    }

    // Getter for name
    string getname() {
        return name;
    }
};

int main() {

    student s1;

    string name;
    int age;

    cout << "Enter the Name of Student: ";
    cin >> name;

    s1.setname(name);

    cout << "Enter the age: ";
    cin >> age;

    s1.setage(age);

    cout << "Name of the Student: " << s1.getname() << endl;

    cout << "Age of the Student: " << s1.getage() << endl;

    return 0;
}
