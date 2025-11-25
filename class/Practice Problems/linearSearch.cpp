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
    cout << "Element to be found: ";
    cin>>m;

    bool found=false;

    for (int i=0; i<n; ++i) {
        if (arr[i]==m) {
            cout << arr[i] << " found at index: " << i;
            found = true;
            break;
        }

    }

    if (!found) {
        cout << "Element not found";
    }
}