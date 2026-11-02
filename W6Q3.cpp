#include<iostream>
using namespace std;

int main(){
    int a;
    
    cout<<"Enter a number: "<<endl;
    cin>>a;
    
    int *p1 = &a;
    
    cout<<"Address of the variable is :"<<p1<<endl;
    
    return 0;
    
}
