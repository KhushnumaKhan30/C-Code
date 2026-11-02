#include<iostream>
#include<string>
using namespace std;

int main(){
	string name;
	float BP, DA, GS;
	
	for(int i=1;i<=2;i++){
		
		cout<<"Enter employee name "<<i<<":"<<endl;
		getline(cin>>ws,name);
		
    	cout<<"Enter basic pay"<<i<<":"<<endl;
    	cin>>BP;
    	
    	
    	DA = BP * (52.0/100);  // da is 52% of basic salary--
    	
    	GS = BP + DA;
    	
    	cout<<"Employee name :"<<name<<endl;
    	
    	cout<<"Gross Salary :"<<GS<<endl;
    	
    	cout<<endl;
		
		
	}
}
