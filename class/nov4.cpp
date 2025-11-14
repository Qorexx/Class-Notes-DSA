#include <iostream>
using namespace std;
int main() {
    // int a, b;
    // char op;
    // cout << "Enter First Number: ";
    // cin >> a;
    // cout << "Enter Operator: ";
    // cin >> op;
    // cout << "Enter Second Number: ";
    // cin >> b;

    // switch (op) {
    //     case '+':
    //     cout << a+b;
    //     break;

    //     case '-':
    //     cout << a-b;
    //     break;

    //     case '*':
    //     cout << a*b;
    //     break;

    //     case '/':
    //     b==0? cout << "Cannot divide by zero" << endl: cout << a/b;
    //     break;

    //     default:
    //     cout << "Unidentified Operator";



    //Program to find if a given character is a vowel or not using switch


    // char s;
    // cout << "Enter the Character";
    // cin >> s;

    // switch (s) {
    //     case 'a':
    //     cout << "vowel";
    //     break;

    //     case 'e':
    //     cout << "vowel";
    //     break;

    //     case 'i':
    //     cout << "vowel";
    //     break;

    //     case 'o':
    //     cout << "vowel";
    //     break;

    //     case 'u':
    //     cout << "vowel";
    //     break;

    //     case 'A':
    //     cout << "vowel";
    //     break;

    //     case 'E':
    //     cout << "vowel";
    //     break;

    //     case 'I':
    //     cout << "vowel";
    //     break;

    //     case 'O':
    //     cout << "vowel";
    //     break;

    //     case 'U':
    //     cout << "vowel";
    //     break;

    //     default:
    //     cout << "Consonant";

    // }

    // for (int i=1; i<=10; ++i) {
    //     if (i==7) {
    //         continue;
    //     }
    //     cout << i << endl;
    // }





    //Pattern Printing 




    // int r;
    // cin >> r;

    // for (int i=1; i<=r; ++i) {
    //     for (int j=1; j<=i; ++j) {
    //         cout << "* ";
    //     } cout << endl;
    // }






    // int r;
    // cin >> r;

    // for (int i=1; i<=r; ++i) {
    //     for (int j=r; j>=i; --j) {
    //         cout << "*";
    //     } cout << endl;
    // }






    // int r;
    // cin >> r;

    // for (int i=1; i<=r; ++i) {
    //     for (int j=1; j<=i; ++j) {
    //         cout << i;
    //     } cout << endl;
    // }







    // int r, num;
    // cin >> r;

    // for (int i=1; i<=r; ++i) {
    //     for (int j=1; j<=i; ++j) {
    //         cout << num << " ";
    //         ++num;
    //     } cout << endl;
    // }




    

    int r;
    cin >> r;

    for (int i=1; i<=r; ++i) {
        for (int j=r; j<=i; --j) {
            for (int k=r-1; k>=j; --k) {
                cout << " ";
            
            for (int m=1; m<= r-k; ++m) {
                cout << "* " << endl;
            }
        }
        }
    }


}
