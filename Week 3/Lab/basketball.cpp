#include<iostream>
using namespace std;
main()
{

       cout<<"Enter round one points: ";
       int round1;
       cin>>round1;

       cout<<"Enter round two points: ";
       int round2;
       cin>>round2;

       int points1;
       points1=round1*2;
       int points2;
       points2=round2*3;

       int totalpoints;
       totalpoints=points1+points2;
       cout<<"Total Points = "<<totalpoints;
}