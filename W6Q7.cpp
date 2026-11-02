#include<iostream>

using namespace std;

int main(){

 int arr[5] = {3,5,6,7,8};
 
     int *p = arr;
     
     for(int i=0;i<5;i++){
     	cout<<*p<<" ";
     	p++;
	 }

}
