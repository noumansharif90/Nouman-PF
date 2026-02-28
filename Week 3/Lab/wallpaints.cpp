#include<iostream>
using namespace std;

main()

{

    cout<<"Enter paint area: ";
    int area;
    cin>>area;

    cout<<"Enter width: ";
    int width;
    cin>>width;

    cout<<"Enter height: ";
    int height;
    cin>>height;

    int wallspainted;
    wallspainted=area/(width*height);
    cout<<"Walls painted = "<<wallspainted;
}