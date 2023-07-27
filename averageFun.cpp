#include <iostream>
using namespace std;

int averageFun(int *arr, int *n){
	int sum = 0;
	for(int i = 0; i < *n; ++i){
		sum += *(arr + i);
	}
	
	return sum / *n;
}

int main(){
	int array[]{1, 2, 3, 4, 5};
	int quant = sizeof(array)/sizeof(int);
	int average = averageFun(array, &quant);
	cout << average << endl;
	cout << quant;
	
	return 0;
}

/* Output 
3
*/	
