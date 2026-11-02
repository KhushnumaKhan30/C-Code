#include<iostream>
#include<string>

 using namespace std;
 
 int main(){
 	
     char str[] = "Hello World";
     
     char *ptr = str;
     
     while(*ptr!='\0'){
     	cout<<*ptr;
     	ptr++;
	 }
     
     return 0;
 }
