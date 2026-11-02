#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int n;
	cout<<"Enter the number:"<<endl;
	cin>>n;
	
	int temp =n;
	int sum=0;
	while(temp!=0){
		
		int d = temp%10;
		sum = sum+pow(d,3);
	    temp= temp/10;
	}
	
	if(sum==n){
		cout<<n<<" is an armstrong number"<<endl;
	}
	else{
		cout<<n<<" is not an armstrong number"<<endl;
	}
	
	return 0;
}
