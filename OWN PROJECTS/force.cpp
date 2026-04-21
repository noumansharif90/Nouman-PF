#include<iostream>
using namespace std;
main()
{
    float weight , mass;
    cout<<" Enter your weight: ";
    cin>>weight;
    int gravity = 10;
    mass= weight/gravity;
    cout<<" Your body mass is : "<<mass;
}