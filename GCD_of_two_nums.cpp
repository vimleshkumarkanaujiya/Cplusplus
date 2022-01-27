    #include <bits/stdc++.h>
    using namespace std;


    int gcd(int a, int b){
		if(a==0){
			return b;
		}
		if(b==0){
			return a;
		}
		return gcd(b, a%b);
	}
	
	int main(){
		cout<<gcd(6,4)<<"\n";
		cout<<gcd(24,18);
		
		return 0;
	}
