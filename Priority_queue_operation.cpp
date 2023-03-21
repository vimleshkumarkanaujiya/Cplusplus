#include<iostream>
#include<queue>
using namespace std;

int main(){
	priority_queue<int> maxh;
	priority_queue<int, vector<int>, greater<int> > minh;
	
	maxh.push(1);
	maxh.push(6);
	maxh.push(2);
	maxh.push(8);
	int n = maxh.size();
	cout << "Size of the queue -> " << n << endl;
	for(int i = 0; i < n; i++){
		cout << maxh.top() << " ";
		maxh.pop();
	}
	
	cout << endl;
	
	minh.push(1);
	minh.push(6);
	minh.push(2);
	minh.push(8);
	int m = minh.size();
	
	for(int i = 0; i < m; i++){
		cout << minh.top() << " ";
		minh.pop();
	}
	
	return 0;
}
