#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Sum of array elements = " << sum(arr, n);

    return 0;
}

