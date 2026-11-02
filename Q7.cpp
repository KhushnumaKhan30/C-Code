#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter a , b ,c :"<<endl;
	cin>>a>>b>>c;
	
	float D = (b*b)-(4*a*c);
	float r1, r2;
	
	if(D>0){
		cout<<"Roots are real and diffrent-->"<<endl;
		cout<<"r1 ="<<((-b)+sqrt(D))/2*a<< endl;
		cout<<"r2 ="<<((-b)-sqrt(D))/2*a<< endl;
	}
	
	else if(D==0){
		cout<<"Roots are real and equal-->"<<endl;
		cout<<"r1 = r2 ="<<(-b)/2*a<< endl;
	}
	
    else{
    	cout<<"Roots are imaginary and diffrent-->"<<endl;
		cout<<"r1 = "<<(-b)/2*a <<"+"<<sqrt(D)/2*a<<"i"<< endl;
		cout<<"r2 = "<<(-b)/2*a <<"-"<<sqrt(D)/2*a<<"i"<< endl;
	}
	
	return 0;
	
}
