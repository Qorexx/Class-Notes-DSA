#include <iostream>
#include <climits>
using namespace std;
int main() {
    //WAP to display array elements with addresses

    // int n;
    // cin >> n;

    // int arr[100];
    // for (int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }

    // for (int i=0; i<n; ++i) {
    //     cout << arr[i] << " :" << &arr[i];
    // }

    //WAP to find the largest element in an array

    // int n;
    // cin >> n;
    // int largest = INT_MIN;

    // int arr[10];
    // for (int i=0; i<n; ++i) {
    //     cin >> arr[i];
    // }
    // for (int i=0; i<n; ++i) {
    //     if (arr[i]>largest) {
    //         largest = arr[i];
    //     }
    // }
    // cout << largest;

    //WAP to input and output the elements of a 2d loop

    // int n, m;
    // cout << "enter no. of rows: ";
    // cin >> n;
    // cout << "enter no. of columns: ";
    // cin >> m;

    // int arr[n][m];

    // for (int i=0; i<n; ++i) {
    //     for (int j=0; j<m; ++j) {
    //         cin >> arr[i][j];
    //     }
    // }

    // for (int i=0; i<n; ++i) {
    //     for (int j=0; j<m; ++j) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int n, m;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    // cout << "Enter the number of columns: ";
    // cin >> m;

    // int arr[n][m];

    // for (int i=0; i<n; ++i) {
    //     for (int j=0; j<m; ++j) {
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << "The traspose of the matrix is: ";

    // for (int i=0; i<m; ++i) {
    //     for (int j=0; j<n; ++j) {
    //         cout << arr[j][i] << "\t";
    //     }
    //     cout << endl;
    // }



    //WAP to find the multiplication of two matrices (incomplete)

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> arr[i][j];
        }
    }

    int k, l;
    cin >> k >> l;

    int array[k][l];

    for (int i=0; i<k; ++i) {
        for (int j=0; j<l; ++j) {
            cin >> array[i][j];
        }
    }

    for (int i=0; i<n; ++i) {
        int sum=0;
        for (int j=0; j<m; ++j) {
            cout << sum + (arr[i][j]*array[j][i]);
        }
        cout << endl;
    }
    
}
