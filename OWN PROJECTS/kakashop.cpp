#include <iostream>
using namespace std;
main()
{
    int price;
    string product, city;
    cout << " enter the product name:";
    cin >> product;
    cout << " enter the city name:";
    cin >>city;
    float quantity;
    cout << " Enter the quantity:";
    cin >>quantity;
    if (product == "cup" && city == "lahore")
    {
        price = quantity * 400;
    }
     else if (product == "tea" && city == "choti")
    {
        price = quantity * 400;
    }
    else if (product == "watch" && city == "dgk")
    {
        price = quantity * 400;
    }
    else if ((product == "glass" || product== "milk") && city == "karachi")
    {
        price = quantity * 400;
    }
    cout << " Price: " << price;
}
