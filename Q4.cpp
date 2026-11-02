#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter no of terms:"<<endl;
	cin>>n;
	
	int first =0, sec = 1;
	
	for(int i=1;i<=n;i++){
		
		cout<<first<<" ";
		
		int next = first + sec;
		first = sec;
		sec= next;
	}
	
	return 0;
}
