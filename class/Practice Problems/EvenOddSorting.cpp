#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i=0; i<n; ++i) {
        cin >> arr[i];
    }

    int even[n];
    int odd[n];
    int counteven=0;
    int countodd=0;

    for (int i=0; i<n; ++i) {
        if (arr[i]==0) {
            continue;
        }

        else if (arr[i]%2==0) {
            even[counteven]=arr[i];
            ++counteven;
        }

        else{
            odd[countodd]=arr[i];
            ++countodd;
        }
        
    }

    cout << "Odd Number: ";
    for (int i=0; i<countodd; ++i) {
        cout << odd[i];
    }

    cout << "Even Number: ";
    for (int i=0; i<counteven; ++i) {
        cout << even[i];
    }
}