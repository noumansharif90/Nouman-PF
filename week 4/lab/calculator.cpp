#include<iostream>
using namespace std;
main()
{
    cout<<" Welcome to inverse calculator \n";
    int num1,num2,result;
    char op;
    cout<<" Enter the 1st number: ";
    cin>>num1;
    cout<<" Enter the operator(+,-,*,/,%) :";
    cin>>op;
    cout<<" Enter the 2nd number :";
    cin>>num2;
    if(op=='+')
    {
        result=num1-num2; 
        cout<<num1<<"-"<<num2 <<"=" <<result;
    }
    else if(op=='*'){
        result=num1/num2; 
        cout<<num1<<"/"<<num2 <<"=" <<result;
    }
     else if(op=='/'){
        result=num1%num2; 
        cout<<num1<<"%"<<num2 <<"=" <<result;}

}
