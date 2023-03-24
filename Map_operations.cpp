#include<iostream>
#include<map>
using namespace std;

int main(){
	map<int, string> m;
	m[1] = "Vimlesh";
	m[4] = "Kanaujiya";
	m[2] = "Kumar";
	
	m.insert({3, "Santosh"});
	
	for(auto i:m){
		cout << i.first << " " << i.second;
		cout << endl;
	}
	
	return 0;
}
