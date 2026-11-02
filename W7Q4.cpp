#include <iostream>
using namespace std;

class pntr_obj {
	
 public:
	int roll_no;
	string name;
	
	void set_data(){
		cout<<"Enter roll no and name:"<<endl;
		cin>>roll_no>>name;
	}
	
	void print(){
		cout<<"Roll no is:"<<this->roll_no<<endl;
		cout<<"Name of the student:"<<this->name<<endl;
	}
};

int main(){
	pntr_obj p1,p2,p3;
	
	p1.set_data();
	p1.print();
	
	p2.set_data();
	p2.print();
	
	p3.set_data();
	p3.print();
	
	return 0;
	
}

