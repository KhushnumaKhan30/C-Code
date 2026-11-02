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
	int largest = arr[0];
	int sec = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>largest){
			sec = largest;
			largest = arr[i];
		}
		else if(arr[i]>largest && arr[i]!=largest ){
			sec = arr[i];
			
		}
	  }
	  cout<<"Second maximum is :"<<sec<<endl;
		
		
 return 0;
 
}
