
#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0, temp, digit;
    int choice;
    int d1, d2, d3, d4;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    temp = num;

    // Extract individual digits
    d4 = temp % 10;
    temp = temp / 10;

    d3 = temp % 10;
    temp = temp / 10;

    d2 = temp % 10;
    temp = temp / 10;

    d1 = temp % 10;

    // Calculate reverse
    temp = num;
    while(temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    cout << "\nMENU" << endl;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Sum of number and its reverse" << endl;
    cout << "3. Sum of alternative digits" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Reverse = " << rev;
            break;

        case 2:
            cout << "Sum = " << num + rev;
            break;

        case 3:
            cout << "1st digit + 3rd digit = "
                 << d1 + d3 << endl;

            cout << "2nd digit + 4th digit = "
                 << d2 + d4;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

