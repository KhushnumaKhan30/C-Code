#include<iostream>
#include<string>

using namespace std;

void insertSubstring(string &str,string sub,int pos){
	str.insert(pos,sub);
}

void deleteChar(string &str,int pos,int n){
	str.erase(pos,n);
}

int main(){
	
	 string str, sub;
	 int pos , n;
	 
	 cout<<"Enter string:"<<endl;
	 getline(cin,str);
	 
	 cout<<"Enter Substring:"<<endl;
	 getline(cin,sub);
	 
	 cout<<"Enter position for insertion:"<<endl;
	 cin>>pos;
	 
	 insertSubstring(str,sub,pos);
	 
	 cout<<"String after insertion :"<<str<<endl;
	 
	 cout<<"Enter no of charcater:"<<endl;
	 cin>>n;
	 
	  cout<<"Enter position for deletion:"<<endl;
	  cin>>pos;
	  
	  deleteChar(str,pos,n);
	  
	  cout<<"String after deletion: "<<str<<endl;
	 
}
