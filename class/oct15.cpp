#include <iostream>
using namespace std;
// int main() {
//     //write a program to check if a number is even or odd
//     int n;
//     cin >> n;
//     if (n%2==0) {
//         cout << "the given number is even";
//     }
//     else if (n%2 != 0) {
//         cout << "the number is odd";
//     }
//     else {
//         cout << "the numbe is zero";

//     }
// }




// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if (a<b) {
//         if (a<c) {
//             cout << a;
//             cout << " is the youngest";
//         }
//     }

//     else if (b<c) {
//         if (b<a) {
//             cout << b;
//             cout << " is the youngest";
//         }
//     }

//     if (c<a) {
//         if (c<b) {
//             cout << c;
//             cout << " is the youngest";
//         }
//     }
// }



int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a<b) {
        if (a<c) {
            cout << a;
            cout << " is the youngest";
        }
        else {
            cout << c;
            cout << " is the smallest";
        }
    }

    else {
        if (b<c) {
            cout << b;
            cout << " is the smallest";
        }
        else {
            cout << c;
            cout << " is the smallest";
        }
    }
}