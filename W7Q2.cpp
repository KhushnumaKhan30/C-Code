#include<iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string:";
    cin.getline(str, 100);
     
    char *p = str;
    int c = 0;
    
    while(*p!='\0'){
    	c++;
		p++;
	}
	
	cout<<"Length of the string is :"<<c<<endl;
	return 0;
}
