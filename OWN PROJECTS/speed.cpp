#include<iostream>
using namespace std;
main()
{
    int distance, time,speed;
    cout<<" Enter the Distance: ";
    cin>>distance;
    cout<<" Enter the time in km: ";
    cin>>time;
    speed=distance/time;
    cout<<" Speed per KM is :"<<speed;
}