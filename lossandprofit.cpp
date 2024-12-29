#include <iostream>
using namespace std;

int main()
{
    int costprice, sellingprice;
    cout << "enter the costprice: ";
    cin >> costprice;
    cout << "enter the sellingprice: ";
    cin >> sellingprice;
    if (costprice > sellingprice)
    {
        cout << "there is a profit "<<costprice-sellingprice;
    }
    else if (costprice < sellingprice)
    {
        cout << "there is a loss "<<sellingprice-costprice;
    }
    else
    {
        cout << "there is no profit nor loss";
    }

    return 0;
}