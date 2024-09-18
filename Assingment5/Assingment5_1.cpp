#include <iostream>
using namespace std;

class date {
    int day;
    int month;
    int year;
public:
    date() : day(1), month(1), year(1) {}

    date(int day, int month, int year) : day(day), month(month), year(year) {}

    void setDay(int day) { this->day = day; }
    void setMonth(int month) { this->month = month; }
    void setYear(int year) { this->year = year; }

    void acceptDate() {
        cout << "Enter the day, month, and year: ";
        cin >> day >> month >> year;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class person {
    string name;
    string address;
    date dob;

public:
    person() : name("Abhi"), address(" "), dob() {}

    person(string name, string address, int day, int month, int year) 
        : name(name), address(address), dob(day, month, year) {}

    void acceptDetails() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the address: ";
        cin >> address;
        cout << "Enter the date of birth:" << endl;
        dob.acceptDate();
    }

    void displayDetails() const {
        cout << "Name - " << name << endl;
        cout << "Address - " << address << endl;
        cout << "Date of birth - ";
        dob.displayDate();
    }
};

int main() {
    person s1;
    s1.acceptDetails();
    
    person s2("Abhishek", "Karad", 6, 7, 2012);
    
    s1.displayDetails();
    s2.displayDetails();
    
    return 0;
}
