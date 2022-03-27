#include<iostream>
using namespace std;

void Prime(int n){
	int check = 0;
	for(int i=1; i<=n; i++){
		if(n%i==0)
		{
			check++;
		}
	}
		if(check==2){
			cout << n << endl;
		}
	}
		int main(){
			int l, u, t;
			cout << "Lower value: ";
			cin >> l;
			cout << "Upper value: ";
			cin >> u;
			if(l > u)
			{
	           t = l;
	           l = u;
	           u = t;
		    }
			for(int i=l; i<=u; i++)
			Prime(i);
			return 0;
		}
