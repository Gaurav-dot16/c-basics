#include <iostream>
using namespace std;

int main()
{
    int i, num;
    cout << "enter the number ";
    cin >> num;
    for (i = num / 2; i>=1; i--)
    {
        if (num % i == 0)
        {
         cout << i << endl;
            break;
        }
    }

    return 0;
}