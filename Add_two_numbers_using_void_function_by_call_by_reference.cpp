//============================================================================
// Name        : Pointers.cpp
// Author      : Vimlesh Kumar Kanaujiya
// Version     :
// Copyright   : All Rights Reserved
// Description : C++, Ansi-style
//============================================================================

 #include <iostream>
 using namespace std;

 void add(int &x, int &y, int &z){

	 z = x + y;
 }

 int main(){
	 int x, y, z;
	 cin >> x >> y;
	 add(x, y, z);
	 cout << z;
	 return 0;
 }
