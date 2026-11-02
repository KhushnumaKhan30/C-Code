#include<iostream>
#include<iostream>
using namespace std;
int main(){
	char s1[100], s2[100];
	char *p1, *p2;
	cout<<"enter the first string:";
	cin.getline(s1,100);
	p1=s1;
	cout<<"enter the second first string:";
	cin.getline(s2,100);
	p2=s2;
	while(*p1!='\0'){
		
		p1++;
	
	}
	while(*p2!='\0'){
		
		*p1=*p2;
		p1++;
		p2++;
	
	}
	*p1='\0';
	cout<<"concatenated string ="<< s1;
	return 0;
	
}
