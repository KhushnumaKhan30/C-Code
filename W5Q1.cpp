#include<iostream>
#include<algorithm>

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

    cout<<"Array Elements are:"<<endl;
	for(int i=0;i<n;i++){
	   cout<<arr[i]<<" ";
 	}
	return 0;
 
}
