#include<iostream>
using namespace std;

void swap_value(int *p1,int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void swap_reference(int& p1,int& p2){
	int temp = p1;
	p1 = p2;
	p2 = temp;
}

int main(){
	int a , b;
	
	cout<<"Enter two number"<<endl;
	cin>>a>>b;
	
	cout<<"Number before swapping"<<endl;
	cout<<a<<" "<<b<<endl;
	swap_value(&a,&b);
	cout<<"Number after swapping using pointer"<<endl;
	cout<<a<<" "<<b<<endl;
	
	cout<<"Number before swapping"<<endl;
	cout<<a<<" "<<b<<endl;
	swap_value(&a,&b);
	cout<<"Number after swapping using reference"<<endl;
	cout<<a<<" "<<b<<endl;
	
	
}
