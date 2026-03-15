#include<iostream>
using namespace std;
main()
{
    int speed;
    cout<<" Enter your speed limit: ";
    cin>>speed;
    if(speed<=10)
    {
        cout<<" Slow ";
    }
    else if( speed>10 && speed<=50)
    {
        cout<<" average ";
    }
    else if( speed>50 && speed<=150)
    {
        cout<<" fast ";
    }
    else if ( speed>150 && speed<=1000)
    {
        cout<<" ultra fast ";
    }
    else if( speed>1000 )
    {
        cout<<" extremely fast ";
    }

}
