#include<iostream>

using namespace std;

int main(){
	int n1,m1;
	cout<<"Enter row size for matrix1: "<<endl;
	cin>>n1;
	cout<<"Enter column size for matrix1: "<<endl;
	cin>>m1;
	
	int mat1[n1][m1];
	
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
		   cin>>mat1[i][j];	
		}
			cout<<endl;
	}
	
	int n2,m2;
	cout<<"Enter row size for matrix2: "<<endl;
	cin>>n2;
	cout<<"Enter column size for matrix2: "<<endl;
	cin>>m2;
	
	int mat2[n2][m2];
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++){
		   cin>>mat2[i][j];	
		}
		cout<<endl;
	}
	
	int sum[n1][m1];
	   
		for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
		   sum[i][j] = mat1[i][j] + mat2[i][j];	
		}
	}
	
	 cout<<"Sum of thye matrix is: "<<endl;
	 		for(int i=0;i<n1;i++){
	     	for(int j=0;j<m1;j++){
		     cout<<sum[i][j]<<" ";	
		}
		
		cout<<endl;
	}
	
	
	return 0;
	
}
	
