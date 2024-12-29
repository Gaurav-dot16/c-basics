#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the value of a ";
    cin >> a;
    cout << "enter the value of b ";
    cin >> b;

    cout << "enter the value of c ";
    cin >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        cout << " these are the sides of a triangle ";
    }
    else
    {
        cout << " these are not the sides of a triangle ";
    }

    return 0;
}