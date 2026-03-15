#include<iostream>
using namespace std;
main()
{
    cout<<"enter imposter : ";
    float imposter;
    cin>>imposter;
    cout<<" enter player : " ;
    int player;
    cin>>player;
    float chance;
    chance=100.0*(imposter/player);
    cout<<" chance will being an imposter : "<<chance <<"%";
}