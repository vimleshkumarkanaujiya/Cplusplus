#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,r,s=0;
	cout<<"Enter a number ";
	cin>>n;
	
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	cout<<"The digital sum is "<<s;
	return 0;
}
