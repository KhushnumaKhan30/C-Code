#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    if (n == 0)
        return;

    display(arr, n - 1);
    cout << arr[n - 1] << " ";
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Array elements are: ";
    display(arr, n);

    return 0;
}

