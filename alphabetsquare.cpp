#include<iostream>
using namespace std;

int main(){
    int m;
    cout << "Enter the number of m: ";
    cin >> m;
  

    for (int i = 1; i <= m; i++) {           // row 
        for (int j = 1; j <= m; j++) {      //cols    
            cout <<(char) (j+64) ;
        }
        cout << endl;
    }

    return 0;
}
