#include<iostream>
using namespace std;

int main(){
    int num ,i;
cout<<"enter the number : ";
cin>>num;
int fact=1;

for ( i = 1; i <=num; i++)
{
fact*=i;

}
cout<<"Factorial of the number is : "<<fact;

    return 0;
}