#include<iostream>
using namespace std;
main()
{
    int price;
    string product;
    cout<<" Please enter product name: ";
    cin>>product;
    float quantity;
    cout<<" Please enter quantity of a product:";
    cin>>quantity;
    if( product=="sweet" || product=="coffee")
{
    price = quantity * 400;
}
   else if( product=="cup")
{
    price = quantity * 300;
}
   else if( product=="water")
{
  price = quantity * 200;
}
else
{
   cout<<" invalid product and price";
}
cout<<" Price: "<<price;
}

