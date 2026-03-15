#include<iostream>
using namespace std;
main()
{
    int num1,num2;
    cout<<" Enter the 1st number: ";
    cin>>num1;
    cout<<" Enter the 2nd number: ";
    cin>>num2;
    if(num1>num2)
    {
        cout<<" Number "<<num1 <<" is greater then "<<num2;
    }
    else{
        cout<<" Number "<<num2 <<" is greater then "<<num1;
    }
}
