#include<iostream>

using namespace std;

int main(){

 int arr[5] = {3,5,6,7,8};
 
     int *p = arr;
     int sum =0;
     
     for(int i=0;i<5;i++){
     	sum = sum+*p;
     	p++;
	 }
	 
	 cout<<"Sum of the array is:"<<sum<<endl;
   return 0;
}
