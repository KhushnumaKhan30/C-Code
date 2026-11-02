#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    int greatest() {
        if (a > b)
            return a;
        else
            return b;
    }
};

  int main() {
    Number obj;

    Number *ptr = &obj;
    ptr->input();

   
    cout << "Greatest number = " << ptr->greatest();

    return 0;
}

