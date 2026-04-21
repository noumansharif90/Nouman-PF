#include <iostream>
using namespace std;
main()
{
    string product;
    cout << " Please enter product name: ";
    cin >> product;
    float quantity;
    cout << " Please enter quantity of a product:";
    cin >> quantity;
    float price;
    if (product == "sweet")
    {
        price = quantity * 400;
    }
    else if (product == "coffee")
    {
        price = quantity * 300;
    }
    else if (product == "juice")
    {
        price = quantity * 200;
    }
    else
    {
        cout<< " invalid product";
    }
    cout << price;
}