#include<iostream>
using namespace std;

int main(){
    int a;
    
    cout<<"Enter a number: "<<endl;
    cin>>a;
    
    int *p1 = &a;
    
    int inc = ++(*p1);
    cout<<"Increment of the num is :"<<inc<<endl;
    int dec = --(*p1);
    cout<<"Decrement of the num is :"<<dec<<endl;
    
 
  

    
    return 0;
    
}
