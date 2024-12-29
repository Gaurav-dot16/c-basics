#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    int product = 1;
    while (number!=0)
    {
    int lastdigit;
    lastdigit=number%10;
    number /=10;
    product = product*lastdigit;

    }
    cout<<product;
    
    
    return 0;
}