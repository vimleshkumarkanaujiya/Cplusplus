    #include <bits/stdc++.h>
    using namespace std;

    int a,b;

    int gcd(int a, int b){
		if(a==0){
			return b;
		}
		if(b==0){
			return a;
		}
		return gcd(b, a%b);
	}
	int lcm(int a, int b){
		return a*b/gcd(a,b);
	}
	
	int main(){
		cin>>a>>b;
		cout<<"lcm is : " <<lcm(a,b);
		return 0;
	}
