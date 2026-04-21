#include<iostream>
using namespace std;

int main()
{
    int price;
    string product, city;

    cout << "Enter the product name: ";
    cin >> product;

    cout << "Enter the city name: ";
    cin >> city;

    float quantity;
    cout << "Enter the quantity: ";
    cin >> quantity;

    if (product == "cup" && city == "lahore")
    {
        price = quantity * 400;
    }
    else if (product == "tea" && city == "choti")
    {
        price = quantity * 300;
    }
    else if (product == "watch" && city == "dgk")
    {
        price = quantity * 500;
    }
    else if (product == "glass" && city == "kot")
    {
        price = quantity * 200;
    }
    else
    {
        cout << "Invalid product or city!";
    }

    cout << "Price: " << price;
}