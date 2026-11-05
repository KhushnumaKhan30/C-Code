
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int num, choice;

    cout << "Enter an integer number: ";
    cin >> num;

    cout << "\nMENU" << endl;
    cout << "1. Convert into Binary" << endl;
    cout << "2. Convert into Octal" << endl;
    cout << "3. Convert into Hexadecimal" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            if(num < 0)
                cout << "Please enter a positive number.";
            else if(num == 0)
                cout << "Binary = 0";
            else
            {
                int binary[32], i = 0;

                while(num > 0)
                {
                    binary[i] = num % 2;
                    num = num / 2;
                    i++;
                }

                cout << "Binary = ";
                for(int j = i - 1; j >= 0; j--)
                    cout << binary[j];
            }
            break;
        }

        case 2:
            if(num < 0)
                cout << "Please enter a positive number.";
            else
                cout << "Octal = " << oct << num;
            break;

        case 3:
            if(num < 0)
                cout << "Please enter a positive number.";
            else
                cout << "Hexadecimal = " << hex << num;
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}

