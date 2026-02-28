#include<iostream>
using namespace std;

main()

{

        cout<<"Enter Initial Velocity (m/s): ";
        int invelocity;
        cin>>invelocity;

        cout<<"Enter Acceleration (m/s^2): ";
        int acceleration;
        cin>>acceleration;

        cout<<"Enter Time (s): ";
        int time;
        cin>>time;

        int finalvelocity;
        finalvelocity=invelocity+acceleration*time;
        cout<<"Final velocity (m/s):"<<finalvelocity;

}