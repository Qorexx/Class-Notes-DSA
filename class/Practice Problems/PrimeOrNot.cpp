#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;

    bool isPrime = true;

    if (n<=1) {
        isPrime = false;
        cout << "Niether Prime Nor Composite";
    }
    else {
        
        for (int i=2; i<=sqrt(n); ++i) {
        if (n%i==0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << n << " is a Prime number";
    }
    else {
        cout << n << " is not a Prime number";
    }
    }
    
}