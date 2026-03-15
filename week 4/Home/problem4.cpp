#include<iostream>
using namespace std;
main()
{
    float redrose,whiterose,tuplisrose,totalprice,discountprice,payableprice;
    cout<<" Enter the number of red roses: ";
    cin>>redrose;
    cout<<" Enter the number of white roses: ";
    cin>>whiterose;
    cout<<" Enter the number of tuplis roses: ";
    cin>>tuplisrose;
    totalprice=(redrose*2.00)+(whiterose*4.10)+(tuplisrose*2.50);
    if(totalprice>200)
    {
        discountprice=totalprice*20/100;
        payableprice=totalprice-discountprice;
        cout<<" Your total price is "<<totalprice <<" But you need to pay after discount"<<payableprice;

    }
    else{
        cout<<" No discount is avaible for you.";
    }
}