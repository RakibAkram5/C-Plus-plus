#include <iostream>
using namespace std;

class Shape {
public:
    void area() {
        cout << "Calculating area of shape." << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Calculating area of circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Calculating area of rectangle." << endl;
    }
};

int main() {
    Circle myCircle;
    Rectangle myRectangle;
    
    myCircle.area();       // Calls Circle's area function
    myRectangle.area();    // Calls Rectangle's area function
    return 0;
}

