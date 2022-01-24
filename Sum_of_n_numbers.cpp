#include <iostream>
using namespace std;

int main()
{
	int n,s=0;
	cout<<"The value of n: ";
	cin>>n;
	for(int i=1;i<=n;++i){
		s+=i;
	}
	cout<<"The sum of " <<n<<" is "<<s;
	return 0;
}
