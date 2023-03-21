#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a(5, 1);
	for(int i:a){
		cout << i <<" ";
	}
	
	return 0;
}
