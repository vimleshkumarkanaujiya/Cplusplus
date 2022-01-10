#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,max;
	cout<< "Enter four numbers\n";
	cin>> a >> b >> c >> d;
	
	if(a>b){
	if(a>c)
	max=a;
	else
	max=c;
	if(a>d)
	max=a;
	else
	max=d;
}
  else {
		if(b>c) 
    {
		if(b>d)
		max=b;
		else
		max=d;
	} 
   else {
		if(c>d)
		max=c;
		else
		max=d;
	}
}
    cout<<"Maximum number is = " <<max;
	return 0;
}
