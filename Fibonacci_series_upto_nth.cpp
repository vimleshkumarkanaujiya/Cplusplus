    #include <iostream>
    using namespace std;


    int main(){
    int n,t1=0,t2=1,tn;
	  cout<<"The number of terms to be printed: ";
	  cin>>n;
	  cout<<"Fibonacci series: ";
	
	  for(int i=0;i<n;i++){
		cout<<t1<<" ";
		tn=t1+t2;
		t1=t2;
		t2=tn;
	  }
	  return 0;
	  }
