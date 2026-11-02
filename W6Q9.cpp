#include<iostream>

using namespace std;

int main(){

 int arr[5];
 
     int *p = arr;
     
     cout<<"Enter elements:"<<endl;
     for(int i=0;i<5;i++){
     	cin>>*p;
     	p++;
	 }
	 
	 cout<<"Elements are:"<<endl;
	 for(int i=0;i<5;i++){
     	cout<<arr[i]<<" ";
	 }
   return 0;
}
