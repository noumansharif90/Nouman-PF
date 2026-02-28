#include<iostream>
using namespace std;

main()

{

     cout<<"Enter the current world population: ";
     int population;
     cin>>population;

     cout<<"Enter number of births per month): ";
     int permonth;
     cin>>permonth;

     int oneyearpopulation;
     oneyearpopulation=permonth*360;

     int threeyearpopulation;
     threeyearpopulation=oneyearpopulation*3;
     cout<<"population in three years will be:"<<threeyearpopulation;
}