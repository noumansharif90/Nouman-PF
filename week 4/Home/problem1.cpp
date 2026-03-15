#include<iostream>
using namespace std;
main()
{
    int ticketprice,discountprice,finalprice;
    string countryname;
    cout<<" Enter the country name: ";
    cin>>countryname;
    cout<<" Enter the ticket price in dollar: ";
    cin>>ticketprice;
    if(countryname=="ireland")
    {
        discountprice=ticketprice*10/100;
    }
    else
    {
        discountprice=ticketprice*5/100;
    }
    finalprice=ticketprice-discountprice;
    cout<<" Your discounted price is:"<<finalprice;
}
