#include <iostream>
using namespace std;

int main()
{
    int Ram, Shyam, Ajay;
    cout << "enter the age of Ram ";
    cin >> Ram;
    cout << "enter the age of Shyam ";
    cin >> Shyam;
    cout << "enter the age of Ajay ";
    cin >> Ajay;
    if (Ram < Shyam && Ram < Ajay)
    {
            cout << "Ram is younger ";

         if (Shyam < Ajay)
            {
                cout << "Shyam is younger ";
            }
else{
     cout << "Ajay is younger ";
}
       
    

    return 0;
}
}