#include <iostream>
using namespace std;

int main()
{
    int length, breadth, area, perimeter;
    cout << "the lenght of rectangle is ";
    cin >> length;
    cout << "the breadth of rectangle is ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        cout << "area is greater";
    }

    else
    {
        cout << "perimeter is greater";
    }

    return 0;
}