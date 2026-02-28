#include <iostream>
using namespace std;

main()

{

    cout<<"Enter the voltage (in Volts):";
    int voltage;
    cin>>voltage;

    cout<<"Enter the current (in Ampares):";
    float current;
    cin>>current;

    float watt;
    watt=voltage*current;
    cout<<"The power P (in watts) is "<<watt;

}