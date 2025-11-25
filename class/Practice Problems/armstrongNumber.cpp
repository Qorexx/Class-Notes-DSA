#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int m = n;
    int l = n;

    int sum = 0; int last;

    int digits=0;

    while (l>0) {
        l/=10;
        ++digits;
    }

    
    while (n>0) {
    last = n%10;
    sum = sum + pow(last, digits);
    n/=10;
    
    sum==m?cout << m << " is an armstrong number": cout << m << " is not an armstrong number";
    }
}