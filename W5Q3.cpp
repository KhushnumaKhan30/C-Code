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
    
    int c = 0;
	for(int i=0;i<n;i++){
		c++;
	}
	
	cout<<"Length of Array is :"<< c<<endl;
	return 0;
}
