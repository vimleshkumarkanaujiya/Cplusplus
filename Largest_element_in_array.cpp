//A program to print the largest element in an array of integers
#include<iostream>
using namespace std;

int array(int a[], int n){
	int max_a = a[0];
	for(int i=0; i<n; i++){
		if(max_a<a[i]){
			max_a = a[i];
		}
	}
	return max_a;
}

int main(){
	int a[] = {43, 44, 76, 87, 100, 23, 34, 12, 4};
	cout << array(a, 9);
	return 0;
}
