#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<" Enter the number: ";
    cin>>n;
    int fact= 1;
    for( int i=n ; i>=1; i--)
{
    cout<<i<<"*";
    fact=fact*i;
}
 cout<< ": "<<fact;
}