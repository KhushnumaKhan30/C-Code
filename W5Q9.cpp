#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Size of the array: "<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter elements in array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int num;
	cout<<"Enter the number which freq you want :"<<endl;
	cin>>num;
	
	int count =0;
    for(int i=0;i<n;i++){
    	
		if(arr[i]==num){
			count++;
		}
	}
	
	cout<<"Frequency of the "<<num<< " is :"<<count<<endl;
	
	return 0;	
}
