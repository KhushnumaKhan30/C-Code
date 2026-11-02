
#include <iostream>
#include <string>
using namespace std;

struct DOB {
    int day;
    int month;
    int year;
};

struct Person {
    string name;
    DOB birth;   
};

int main() {
    Person p;

    cout << "Enter your name: ";
    getline(cin, p.name);

    cout << "Enter your date of birth:" << endl;

    cout << "Enter day: ";
    cin >> p.birth.day;

    cout << "Enter month: ";
    cin >> p.birth.month;

    cout << "Enter year: ";
    cin >> p.birth.year;

    cout << "\nYour Details" << endl;
    cout << "Name: " << p.name << endl;
    cout << "Date of Birth: "
         << p.birth.day << "/"
         << p.birth.month << "/"
         << p.birth.year << endl;

    return 0;
}

