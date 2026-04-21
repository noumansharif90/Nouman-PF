#include<iostream>
using namespace std;
main()
{
  int imposter,player,chance;
  cout<<" impoter count : ";
  cin>>imposter;
  cout<<" player count : ";
  cin>>player;
  chance= 100*imposter/player;
  cout<<" chance being an imposter is: "<<chance;
}