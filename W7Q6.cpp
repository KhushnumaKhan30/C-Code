#include <iostream>
using namespace std;

class Flight {
    int flightNumber;
    string source;
    string destination;
    float fare;

public:
   
    void input() {
        cout << "Enter Flight Number: ";
        cin >> flightNumber;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Fare: ";
        cin >> fare;
    }

    
    void display() {
        cout << "Flight Information"<<endl;
        cout << "Flight Number: " << this->flightNumber << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: " << this->fare << endl;
    }
};

int main() {
    Flight f;

    f.input();
    f.display();

    return 0;
}
