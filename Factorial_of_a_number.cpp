#include <iostream>
using namespace std;

int main()
{
	int n;
	long double f=1.0;
	cout<<"Enter the value of n: ";
	cin>>n;
	
	if(n<0){
		cout<<"Enter the value of n: ";
	}else{
	     for(int i=1;i<=n;++i){
			f*=i;
		 }
		cout<<"The factorial of "<< n <<" is "<<f;
	     }
	return 0;
}
