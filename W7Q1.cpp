#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);
     
    char *p = str;
    int c = 0;
    
    while(*p!='\0'){
    	if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u'){
    		c++;
		}
		p++;
	}
	
	cout<<"Number of vowels are :"<<c<<endl;
	return 0;
}
