#include<iostream>
using namespace std;

int main(){
    int num , sum;
    cout << "Enter a number: ";
    cin >> num;
    int reverse = 0;
    
    while(num != 0){
        int lastdigit = num % 10;
        reverse = reverse * 10 + lastdigit;
        num /= 10;
    }
    sum=sum+reverse;

    
    cout << "Reversed number: " << reverse << endl;
    cout<<"sum of both numbers : "<< sum<< endl;
    return 0;
}
