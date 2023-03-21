#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> n(6, 99);
	for(int i:n){
		cout << i <<" ";
	}
	
	return 0;
}
