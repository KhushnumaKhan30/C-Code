#include <iostream>
using namespace std;

int maximum(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int maxElement = maximum(arr, n - 1);

    if (arr[n - 1] > maxElement)
        return arr[n - 1];
    else
        return maxElement;
}

int minimum(int arr[], int n)
{
    if (n == 1)
        return arr[0];

    int minElement = minimum(arr, n - 1);

    if (arr[n - 1] < minElement)
        return arr[n - 1];
    else
        return minElement;
}

int main()
{
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;

    cout << "Maximum element = " << maximum(arr, n) << endl;
    cout << "Minimum element = " << minimum(arr, n) << endl;

    return 0;
}

