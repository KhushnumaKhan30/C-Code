#include <iostream>
#include <cmath>
using namespace std;

void towerOfHanoi(int n)
{
    char source = 'A';
    char auxiliary = 'B';
    char destination = 'C';

    int totalMoves = pow(2, n) - 1;

    // If number of disks is even, swap auxiliary and destination
    if (n % 2 == 0)
    {
        char temp = auxiliary;
        auxiliary = destination;
        destination = temp;
    }

    for (int i = 1; i <= totalMoves; i++)
    {
        if (i % 3 == 1)
        {
            cout << "Move disk from " << source
                 << " to " << destination << endl;
        }
        else if (i % 3 == 2)
        {
            cout << "Move disk from " << source
                 << " to " << auxiliary << endl;
        }
        else
        {
            cout << "Move disk from " << auxiliary
                 << " to " << destination << endl;
        }
    }
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter a positive number of disks.";
        return 0;
    }

    towerOfHanoi(n);

    return 0;
}
