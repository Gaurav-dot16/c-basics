#include <iostream>
using namespace std;

int main()
{
    int i, number;
    cout << "enter the number ";
    cin >> number;
    for (i = number; i <= number*10; i += number)
    cout<<i<<endl;
    return 0;
}

