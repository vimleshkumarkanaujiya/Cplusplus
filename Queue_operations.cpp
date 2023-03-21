#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<string> q;
	q.push("Vimlesh");
	q.push("Kumar");
	q.push("Kanaujiya");
	
	cout << q.front();
	cout << endl;
	cout << q.back();
	cout << endl;
	q.pop();
	cout << endl;
	cout << q.front();
	return 0;
}
