#include<iostream>
#include<string>
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
	
	for(int i=0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1]=temp;
	  }
     
	
	cout<<"Reversed Array is :"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
