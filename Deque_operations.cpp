#include<iostream>
#include<deque>
using namespace std;

int main(){
	//Initialization of Deque
	deque<int> d;
	//Add an element at front
	d.push_front(1);
	//Add an element at back
	d.push_back(2);
	//Iterate through the elements
	for(int i:d){
		cout << i <<" ";
	}
	//Erase elements
	d.erase(d.begin(), d.begin()+1);
	cout << endl;
	//Iterate through the elements after erase
	for(int i:d){
		cout << i <<" ";
	}
	//Exit the program
	return 0;
}
