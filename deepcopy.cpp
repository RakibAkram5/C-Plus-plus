#include <iostream>
using namespace std;

// Helper function to calculate the length of a string
int length(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Helper function to deep copy a string
char* deepcopy(const char* str) {
    int len = length(str);          // Get length of the string
    char* copy = new char[len + 1]; // Allocate memory for the copy
    for (int i = 0; i < len; i++) {
        copy[i] = str[i];           // Copy each character
    }
    copy[len] = '\0';               // Add the null terminator
    return copy;                    // Return the copied string
}

class string {
private:
    char* s;
    int size;

public:
    // Constructor
    string(const char* str = nullptr) {
        if (str) {
            size = length(str);
            s = deepcopy(str);  // Assign the deep-copied string
        } else {
            s = nullptr;
            size = 0;
        }
    }

    // Destructor
    ~string() {
        delete[] s;  // Free the allocated memory
    }

    // Copy Constructor
    string(const string& old_str) {
        size = old_str.size;      // Copy size from the old string
        s = deepcopy(old_str.s);  // Deep copy the string
    }

    // Function to change the string
    void change(const char* str) {
        delete[] s;               // Free the old string
        size = length(str);       // Get the new size
        s = deepcopy(str);        // Deep copy the new string
    }

    // Function to print the string
    void print() const {
        if (s) {
            cout << s << endl;    // Output the string
        }
    }
};

int main() {
    string str1("Rakib");
    string str2 = str1;  // Copy constructor is called

    str1.print();
    str2.print();

    str2.change("Akram");

    str1.print();
    str2.print();

    return 0;
}

