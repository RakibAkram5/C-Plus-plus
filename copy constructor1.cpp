#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    private:
        char* s;
        int size;

    public:
        MyString(const char* str = NULL); // Constructor
        ~MyString(); // Destructor
        MyString(const MyString&); // Copy constructor
        void change(const char* str); // Change method
        void print(); // Print method
};

// Constructor
MyString::MyString(const char* str) {
    if (str) {
        size = strlen(str);
        s = new char[size + 1];
        strcpy(s, str);
    } else {
        size = 0;
        s = new char[1];
        s[0] = '\0';
    }
}

// Destructor
MyString::~MyString() {
    delete[] s;
}

// Copy constructor
MyString::MyString(const MyString& old_str) {
    size = old_str.size;
    s = new char[size + 1];
    strcpy(s, old_str.s);
}

// Change method
void MyString::change(const char* str) {
    delete[] s;
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s, str);
}

// Print method
void MyString::print() {
    cout << s << endl;
}

int main() {
    MyString str1("Rakib");
    MyString str2 = str1; // Copy constructor called here

    str1.print(); // Output: Rakib
    str2.print(); // Output: Rakib

    str2.change("Akram");
    str1.print(); // Output: Rakib (str1 should remain unchanged)
    str2.print(); // Output: Akram

    return 0;
}

