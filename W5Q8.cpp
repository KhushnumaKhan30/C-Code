#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	cout<<"Size of first array: "<<endl;
	cin>>n1;
	cout<<"Size of second array: "<<endl;
	cin>>n2;
	int arr1[n1],arr2[n2];
	
	cout<<"Enter elements in first array:"<<endl;
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	
	cout<<"Enter elements in second array:"<<endl;
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
    
    int merge[n1+n2] ;
	int i=0,j=0,k=0;
	
	  while(i<n1 && j<n2){
	  	  if(arr1[i]<arr2[j]){
	  	  	  merge[k++]=arr1[i++];
			}
			else{
			  merge[k++]=arr2[j++];	
			}
	  }
	  
	  while(i<n1){
	  	 merge[k++]=arr1[i++];
	  }
	  while(j<n2){
	  	 merge[k++]=arr2[j++];
	  }
	  
	cout<<"Merge sorted Array :"<<endl;
	for(int i=0;i<n1+n2;i++){
		cout<<merge[i]<<" "<<endl;
	}
      
	return 0;
}
