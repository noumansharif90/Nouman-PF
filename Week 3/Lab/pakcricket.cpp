#include<iostream>
using namespace std;

main()

{
          cout<<"Enter the number of wins: ";
          int wins;
          cin>>wins;

          cout<<"Enter the number of draws: ";
          int draws;
          cin>>draws;

          cout<<"Enter the number of losses: ";
          int losses;
          cin>>losses;

          int wininnings;
          wininnings=wins*3;

          int drawinnings;
          drawinnings=draws*1;
   
          int lossinnings;
          lossinnings=losses*0;
 
          int obtained;
          obtained=wininnings+drawinnings;
          cout<<"Pakistan has obtained " <<obtained <<" points in Asia Cup Tournament";

}