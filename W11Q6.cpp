
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    string name;
    int accountNumber;
    string accountType;
    float balance;

public:

    // Function to assign initial values
    void assign()
    {
        cout << "Enter depositor name: ";
        getline(cin, name);

        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter account type: ";
        cin >> accountType;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    // Function to deposit amount
    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        if(amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully.";
        }
        else
        {
            cout << "Invalid deposit amount.";
        }
    }

    // Function to withdraw amount
    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.";
        }
        else
        {
            cout << "Insufficient balance or invalid amount.";
        }
    }

    // Function to display account details
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Depositor Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Available Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.assign();

    int choice;

    do
    {
        cout << "\n\nMENU" << endl;
        cout << "1. Deposit Amount" << endl;
        cout << "2. Withdraw Amount" << endl;
        cout << "3. Display Account Details" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                b.deposit();
                break;

            case 2:
                b.withdraw();
                break;

            case 3:
                b.display();
                break;

            case 4:
                cout << "Thank you for using our bank.";
                break;

            default:
                cout << "Invalid choice!";
        }

    } while(choice != 4);

    return 0;
}

