#include<iostream>
using namespace std;
int fact(int x){
 int f=1;
 for(int i=1;i<=x;i++){
    f*=i;
 }
 return f;
}

int main(){
    int n , r ;

    cout<<"enter the value of n :";
    cin>>n;
      cout<<"enter the value of r :";
    cin>>r;
        int a=fact(n);
        int b=fact(r);
        int c=fact(n-r);

cout<<"combination is :"<<a/(b*c);



}