# include <bits/stdc++.h>
using namespace std;
int main(){
	int n, i, check=0;
	cout << "N:";
	cin >> n;
	for(i=1; i<=n; i++){
		if(n%i==0){
			check++;
		}
	}
		if(check==2)
			cout << n << " is a prime number";
		else
			cout << n << " is not a prime number";
		
		return 0;
	}
