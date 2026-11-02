#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter no of terms:"<<endl;
	cin>>n;
	
	for(int num=2;num<=n;num++){
		
		bool isprime = true;
		
		for(int i =2;i*i<=num;i++){
			
			if(num%i==0){
				isprime =false;
				break;
			}
		}
		
		if(isprime){
			cout<<num<<" ";
		}
		
	}
	
	return 0;
}
