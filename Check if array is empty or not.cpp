#include<bits/stdc++.h>
using namespace std;

int main(){
	int i;
	array<int, 4> a = {1, 2, 3, 4};
	int size = a.size();
	for(i = 0; i<size; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Element at third index -> "<< a.at(3) << endl;
	if(a.empty())
		cout << "The array is empty" << endl;
	else
		cout << "The array is not empty";
	return 0;
}
