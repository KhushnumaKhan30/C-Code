#include<iostream>
#include<cstring>

using namespace std; 

union address{
	char name[100];
	char home_add[100];
	char hostel_add[100];
	char city[100];
	char state[100];
	char zip[100];
	
};

int main(){
	address a;
	
	cout<<"Enter name:"<<endl;
	cin.getline(a.name, 100);
	
	cout<<"Enter home address:"<<endl;
	cin.getline(a.home_add, 100);
	
	cout<<"Enter hostel address:"<<endl;
	cin.getline(a.hostel_add, 100);
	
	cout<<"Enter city:"<<endl;
	cin.getline(a.city, 100);
	
	cout<<"Enter state:"<<endl;
	cin.getline(a.state, 100);
	
	cout<<"Enter zip:"<<endl;
	cin.getline(a.zip, 100);
	
	cout<<"Name is: "<<a.name<<endl;
//	cout<<"Home address is: "<<a.name<<endl;
//	cout<<"Hostel address is: "<<a.name<<endl;
//	cout<<"city is: "<<a.name<<endl;
//	cout<<"state is: "<<a.name<<endl;
//	cout<<"zip is: "<<a.name<<endl;
//	
	return 0;
}
