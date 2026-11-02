#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double arr[n];
    cout << "Enter " << n << " real numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    double *ptr = arr;
    double sum = 0;

  for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    
    double mean = sum / n;

  
    double variance = 0;

    for (int i = 0; i < n; i++) {
        variance += pow(*(ptr + i) - mean, 2);
    }

    variance = variance / n;
    double standardDeviation = sqrt(variance);

    cout << "Sum = " << sum<<endl;
    cout << "Mean = " << mean<<endl;
    cout << "Standard Deviation = " << standardDeviation<<endl;

    return 0;
}

