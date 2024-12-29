//first method

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter any number ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< 2*j-1 ;
        }
        cout<<endl;
    }

    //second method
        for(int i=1;i<=n;i++){
        for(int j=1;j<=2*i-1;j+=2){
            cout<< j ;
        }
        cout<<endl;
    }
    return 0;
}




