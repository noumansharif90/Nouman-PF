#include <iostream>
using namespace std;
main()
{
    int price, disprice, final;
    cout << " Enter the shopping price: ";
    cin >> price;
    if (price <= 5000)
    {
        disprice = price * 5 / 100;
    }
    else
    {
        disprice = price * 10 / 100;
    }
    final = price - disprice;
    cout<<" Your discounted price is: "<<final;
}