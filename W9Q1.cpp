#include<iostream>

using namespace std;

// recursive fun for factorial
int fact(int n){
	if(n==1 || n==0){
		return 1;
	}
	
	return n*fact(n-1);
}

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	
	gcd(b,a%b);
}
int main(){
	int n , a, b;
	
	cout<<"Enter no. to calculate factorial: "<<endl;
	cin>>n;
	
	int factorial = fact(n);
	
	cout<<"Factorial of "<<n<< " is : "<<factorial<<endl;
	
	cout<<"Enter two no. to calculate gcd: "<<endl;
	cin>>a>>b;
	
	int calGcd = gcd(a,b);
	cout<<"Gcd of "<<a<<","<<b<<" is :"<<calGcd<<endl;
	
	return 0;
	
}
