#include<iostream>
using namespace std;
main()
{
    int temp1,temp2,diffrence;
    cout<<" Enter the 1st city temperature: ";
    cin>>temp1;
    cout<<" Enter the 2nd city temperature: ";
    cin>>temp2;
    diffrence=temp1-temp2;
    if(diffrence>10)
    {
        cout<<" Diffrence is too Big ";
    }
    else{
        cout<<" Program too wrr giya ";
    }
}