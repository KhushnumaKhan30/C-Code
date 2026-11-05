
#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    int choice;

    cout << "MENU" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(choice)
    {
        case 1:
            cout << "Addition = " << num1 + num2;
            break;

        case 2:
            cout << "Subtraction = " << num1 - num2;
            break;

        case 3:
            cout << "Multiplication = " << num1 * num2;
            break;

        case 4:
            if(num2 != 0)
                cout << "Division = " << num1 / num2;
            else
                cout << "Error! Division by zero is not possible.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

