#include<iostream>
using namespace std;

int main() {
    int n ;  
    cout<<"enter the number ";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {  // If row number is odd
            for (int j = 1; j <= i; j++) {
                cout << j;  // Print numbers
            }
        } else {  // If row number is even
            for (int j = 1; j <= i; j++) {
                cout << (char)(j + 64);  // Print letters (A = 65 in ASCII)
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
