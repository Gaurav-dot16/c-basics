
#include<iostream>
using namespace std;

int main() {
    // Print ASCII values of uppercase letters
    cout << "Uppercase letters and their ASCII values:" << endl;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " : " << (int)ch << endl;
    }

    // Print ASCII values of lowercase letters
    cout << "\nLowercase letters and their ASCII values:" << endl;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        cout << ch << " : " << (int)ch << endl;
    }

    return 0;
}
