#include <iostream>
using namespace std;

int main()
{
    int i, num;
    bool flag  = true;   // prime
    cout << "enter the number ";
    cin >> num;
    for (i =2; i<=num/2; i++)
    {
        if (num % i == 0)
        {
         flag = false;  // composite
            break;
        }
   
    }
    if(num==1){
        cout<<"neither prime or composite ";

    }
    else if(flag==true){
            cout<<"prime ";
        }
        else{
            cout<<"composite";
        }
    return 0;
}