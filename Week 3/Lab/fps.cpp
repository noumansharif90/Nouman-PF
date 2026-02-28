#include<iostream>
using namespace std;

main()

{

    cout<<"Enter Minutes: ";
    int minutes;
    cin>>minutes;

    cout<<"Enter fps: ";
    int fps;
    cin>>fps;

    int totalframes;
    totalframes=minutes*60*fps;
    cout<<"Total Frames = :"<<totalframes;
}