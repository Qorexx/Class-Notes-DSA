#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    int mat1[n][m];

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> mat1[i][j];
        }
    }

    int p, q;
    cin >> p >> q;

    int mat2[p][q];

    for (int i=0; i<p; ++i) {
        for (int j=0; j<q; ++j) {
            cin >> mat2[i][j];
        }
    }

    int mat3[n][q];

    if (m==p) {
        for (int i=0; i<n; ++i) {
        int sum=0;
        int k=0;

        for (int j=0; j<m; ++j) {
            sum += mat1[i][j]*mat2[j][i];
        }
        ++k;
        mat3[i][k]=sum;
    }
    }
    else {
        cout << "Multiplication not possible"
    }
}