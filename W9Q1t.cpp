#include<iostream>
using namespace std;

// Non-recursive function for factorial
int fact(int n){
    int f = 1;

    for(int i = 1; i <= n; i++){
        f = f * i;
    }

    return f;
}

// Non-recursive function for GCD
int gcd(int a, int b){
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main(){
    int n, a, b;

    cout << "Enter no. to calculate factorial: " << endl;
    cin >> n;

    int factorial = fact(n);

    cout << "Factorial of " << n << " is: " << factorial << endl;

    cout << "Enter two no. to calculate GCD: " << endl;
    cin >> a >> b;

    int calGcd = gcd(a, b);

    cout << "GCD of " << a << "," << b << " is: " << calGcd << endl;

    return 0;
}
