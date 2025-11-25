#include <iostream>
using namespace std;
int main() {
    int n, rev=0;
    cin >> n;
    int m=n;
    int last;
    while (n>0) {
        last = n%10;
        rev = rev*10+last;
        n/=10;
    }
    rev==m?cout << "Palindrome": cout << "Not a palindrome";

}