# include <bits/stdc++.h>
using namespace std;

 int main(){
	 int n, q, result = 0, rem;
	 cout << "N: ";
	 cin >> n;
	 q = n;
	 while ( q!=0){
		 rem = q%10;
		 result = result * 10 + rem;
		 q = q/10;
	 }
	 if ( result == n )
		 cout << result << " is a Palindrome number";
	 else
		 cout << result << " is not a Palindrome number";
	 
	 return 0;
 }
