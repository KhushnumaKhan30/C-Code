
#include <iostream>
using namespace std;

// Function for addition
float add(float a, float b)
{
    return a + b;
}

// Function for subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Function for multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Function for division
float divide(float a, float b)
{
    return a / b;
}

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
            cout << "Addition = " << add(num1, num2);
            break;

        case 2:
            cout << "Subtraction = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Multiplication = " << multiply(num1, num2);
            break;

        case 4:
            if(num2 != 0)
                cout << "Division = " << divide(num1, num2);
            else
                cout << "Division by zero is not possible.";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

