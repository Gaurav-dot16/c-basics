#include <iostream>
using namespace std;

int main()
{
    int i, number , a=4;
    cout << "enter the number ";
    cin >> number;


//method 1

    // for (i = 4; i <= (3 * number + 1); i += 3)
    // {
    //     cout << i << " ";
    // }




    //method 2
for ( i = 1; i <=number; i++)
{

    cout<<a<<endl;
    a=a+3;
}


    return 0;
}