#include<iostream>
using namespace std;

int main(){
    int a,b;
    
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    
    int *p1 = &a;
    int *p2 = &b;
    
    cout<<"Before swapping----"<<endl;
    cout<<"a = "<<*p1<<endl;
    cout<<"b = "<<*p2<<endl;
    
    int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    
    cout<<"After swapping----"<<endl;
    cout<<"a = "<<*p1<<endl;
    cout<<"b = "<<*p2<<endl;
    
    
    return 0;
    
}
