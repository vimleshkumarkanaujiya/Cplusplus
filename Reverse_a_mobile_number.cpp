#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, reversedNumber = 0, left;

    cout << "n is: ";
    cin >> n;

    while(n != 0) {
        left = n%10;
        reversedNumber = reversedNumber*10 + left;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber;

    return 0;
}
