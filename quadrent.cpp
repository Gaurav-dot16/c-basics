#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"enter coordinants ";
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"first quadrent";
    }
    else if(x<0 && y>0){
        cout<<"second quadrent";
    }
       else if(x<0 && y<0){
        cout<<"third quadrent";
    }
       else if(x>0 && y<0){
        cout<<"fourth quadrent";
    }
    else{
        cout<<"origin";
    }
    return 0;
}