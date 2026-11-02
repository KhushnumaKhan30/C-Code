#include<iostream>
using namespace std;

int main(){
   int a ,b,c,d,e,f,g;
   cout<<"Enter a, b,c,d,e,f,g:"<<endl;
   cin>>a>>b>>c>>d>>e>>f>>g;
   
   int exp = ((a + b / c * d- e) *(f- g));
   
   cout<<"Result of expression is :"<< exp<<endl;
   
   return 0;
}
