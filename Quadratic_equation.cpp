#include<bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c,x1,x2,discriminant,realPart,imaginaryPart;
	cout<<"Enter the coefficients \n";
	cin>>a>>b>>c;
	discriminant=b*b-4*a*c;
	if(discriminant>0){
		x1=(-b+sqrt(discriminant))/2*a;
		x2=(-b-sqrt(discriminant))/2*a;
		cout<<"Roots are real and different!"<<" ";
		cout<<"x1 is\n"<<x1; 
		cout<<"x2 is" <<x2;
	}
	else if(discriminant==0){
		x1=-b/2*a;
		cout<<"Roots are real and equal\n"<<"x1=x2 is" <<x1;
	}
	else{
		realPart=-b/2*a;
		imaginaryPart=sqrt(-discriminant)/2*a;
		cout<<"Roots are complex and different\n";
		cout<<"x1 is "<<realPart<<"+"<<"i"<<imaginaryPart<<"\n";
		cout<<"x2 is "<<realPart<<"-"<<"i"<<imaginaryPart;
	}
	return 0;
}
