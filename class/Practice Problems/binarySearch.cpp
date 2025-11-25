#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    int m;
    cout << "Element to be found: "; cin >> m;
    
    while (true) {
        int beg=0; int end=m;
        if (m<(beg+end)/2) {
            end = (beg+end)/2 - 1;
        }
        else if (m>(beg+end)/2) {
            beg = (beg+end)/2 + 1;
        }
        else {
            cout << m << " found at index: " << beg;
            break;
        }
    }
}