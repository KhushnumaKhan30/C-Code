#include<iostream>
#include<cstring>

using namespace std;

struct Book{
	
	int bid;
	string title;
	string author;
	float price;	
};

  
  void display(Book b){
		
		cout<<"Book id is: "<<b.bid<<endl;
		cout<<"Book title is: "<<b.title<<endl;
		cout<<"Book author is: "<<b.author<<endl;
		cout<<"Book price is: "<<b.price<<endl;
		
	}

int main(){
	Book b1;
	
	cout<<"Enter book id: "<<endl;
	cin>>b1.bid;
	cin.ignore();
	
	cout<<"Enter title: "<<endl;
	getline(cin ,b1.title);
	
	cout<<"Enter author: "<<endl;
	getline(cin ,b1.author);

	cout<<"Enter price: "<<endl;
	cin>>b1.price;
	
	
	display(b1);
	
	
}
