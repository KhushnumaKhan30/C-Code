
#include <iostream>
using namespace std;

// Function to perform Binary Search
int binarySearch(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
            return mid;

        else if(arr[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if(result == -1)
        cout << "Element not found!";
    else
        cout << "Element found at index: " << result;

    return 0;
}

