#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter Array size: "<<endl;
	cin>>n;
	int arr[n];
	
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    
    int pos=0, neg=0, odd=0, even=0;
	for(int i=0;i<n;i++){
		
		if(arr[i]<0){
			neg++;
		}
		if(arr[i]>0){
		  pos++;
		}
		if(arr[i]%2==0)
			even++;
		else
		  odd++;
		
	}
	
	cout<<"Positive numbers are :"<<pos<<endl;
	cout<<"Negative numbers are :"<<neg<<endl;
	cout<<"Even numbers are :"<<even<<endl;
	cout<<"Odd numbers are :"<<odd<<endl;
	
	return 0;
}
