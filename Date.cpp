#include <iostream>
using namespace std;

// Date class definition
class Date {
private:
    int day, month, year;

public:
    // Constructor with validation
    Date(int _day, int _month, int _year) {
        if (_day < 1 || _day > 31) {
            cout << "Invalid day! Setting to 1.\n";
            day = 1;
        } else {
            day = _day;
        }

        if (_month < 1 || _month > 12) {
            cout << "Invalid month! Setting to 1.\n";
            month = 1;
        } else {
            month = _month;
        }

        if (_year < 0) {
            cout << "Invalid year! Setting to 2000.\n";
            year = 2000;
        } else {
            year = _year;
        }
    }

    // Function to display the date
    void display() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    // Function to calculate age
    int calculateAge(const Date& currentDate) const {
        int age = currentDate.year - year;

        // If the current month and day are earlier than the birth month and day,
        // subtract one from the age
        if (currentDate.month < month || (currentDate.month == month && currentDate.day < day)) {
            age--;
        }

        return age;
    }
};

// Main function
int main() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;

    // Getting the user's birth date
    cout << "Enter your birth date (day month year): ";
    cin >> birthDay >> birthMonth >> birthYear;

    // Creating birthDate object
    Date birthDate(birthDay, birthMonth, birthYear);

    // Getting the current date
    cout << "Enter the current date (day month year): ";
    cin >> currentDay >> currentMonth >> currentYear;

    // Creating currentDate object
    Date currentDate(currentDay, currentMonth, currentYear);

    // Displaying the dates
    cout << "\nYour birth date: ";
    birthDate.display();
    
    cout << "Current date: ";
    currentDate.display();

    // Calculating and displaying the age
    int age = birthDate.calculateAge(currentDate);
    cout << "\nYour age: " << age << " years" << endl;

    return 0;
}

