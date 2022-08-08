#include <iostream>
using namespace std;

class Animal{
private:
	string name;
public:
	Animal(){
		cout << "Animal is created" << endl;
	}
	Animal(const Animal& other):
		name(other.name){
		cout << "Animal created by copying constructor" <<endl;
	}
	~Animal(){
		cout << "Animal is destroyed" <<endl;
	}
	void setName(string name){
		this->name = name;
	}
	void speak(){
		cout <<"My name is: "<< name << endl;
	}
};

int main()
{
	Animal *pCat = new Animal;
	delete pCat;
	return 0;
}
