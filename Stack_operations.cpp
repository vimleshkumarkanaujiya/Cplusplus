#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<string> s;
	s.push("Metteyya");
	s.push("Ariya");
	s.push("Hi");
	
	cout <<s.top();
	cout << endl;
	cout <<s.size();
	cout << endl;
	cout <<s.empty();
	return 0;
}
