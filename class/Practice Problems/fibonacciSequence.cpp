#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int s1 = 0;
    int s2 = 1;

    if (n>=1)
     cout << s1 << " ";
    if (n>=2)
     cout << s2 << " ";
    for (int i=3; i<=n; ++i) {
        int s3 = s1+s2;
        cout << s3 << " ";
        s1=s2;
        s2=s3;
    }
}