#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int sum=0;
    int last;

    while (n>0) {
        last = n%10;
        sum = sum + last;
        n/=10;
    }
    cout << sum;
}