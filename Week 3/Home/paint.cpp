#include<iostream>
using namespace std;

main()

{

    cout<<" Number of square meter you can paint : " ;
    int meter;
    cin>>meter;

    cout<<"Enter width: ";
    int width;
    cin>>width;

    cout<<"Enter height: ";
    int height;
    cin>>height;

    int wallspainted;
    wallspainted=meter/(width*height);
    cout<<"Walls painted = "<<wallspainted;
}