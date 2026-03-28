#include<iostream>
using namespace std;
main()
{
    int multiple;
    int table;
    cout<<" enter number for tabole :";
    cin>>table;
    for(int i=1; i<=10; i++)
{
    multiple=table*i;
    cout<<table << "*" <<i<<"=" <<multiple <<endl;
}
}