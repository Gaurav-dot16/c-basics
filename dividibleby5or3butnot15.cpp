#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter the number ";
    cin>> number;
    if(number%5==0 || number%3==0 && number%15!=0)
    {
    cout<<" number is divisible ";
    }

else{
    cout<<" number is not divisible ";
}
    
    return 0;
}