#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, n, i, r=1;
    cout << "a and n : ";
    cin >> a >> n;
    
    for(i=0; i<n; i++){
		r = r*a;
	  }
	  cout << a <<"^"<< n << " is : " << r;
	  return 0;
}
