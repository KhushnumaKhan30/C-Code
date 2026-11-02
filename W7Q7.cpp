#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m) {
        marks = m;
    }

  
    Student& display() {
        cout << "Marks = " << this->marks << endl;

        return *this;
    }
};

int main() {
    Student s(85);

    s.display();

    return 0;
}
