#include<iostream>
using namespace std;

main()

{

    cout<<"Enter number 1:";
    int num1;
    cin>>num1;

    cout<<"Enter number 2:";
    int num2;
    cin>>num2;  

    cout<<"Enter number 3: ";
    int num3;
    cin>>num3;  

    cout<<"Enter number 4: ";
    int num4;
    cin>>num4;
      
    cout<<"Enter number 5: ";
    int num5;
    cin>>num5;

    int FirstFiveAdd;
    FirstFiveAdd=num1+num2+num3+num4+num5;

    cout<<"Enter number 6:";
    int num6;
    cin>>num6;

    cout<<"Enter number 7:";
    int num7;
    cin>>num7;  

    cout<<"Enter number 8: ";
    int num8;
    cin>>num8;  

    cout<<"Enter number 9: ";
    int num9;
    cin>>num9;
      
    cout<<"Enter number 10: ";
    int num10;
    cin>>num10;

    int NextFiveMultiply;
    NextFiveMultiply = num6*num7*num8*num9*num10;
     
    cout<<"Enter number 11:";
    int num11;
    cin>>num11;

    cout<<"Enter number 12:";
    int num12;
    cin>>num12;  

    cout<<"Enter number 13: ";
    int num13;
    cin>>num13;  

    cout<<"Enter number 14: ";
    int num14;
    cin>>num14;
      
    cout<<"Enter number 15: ";
    int num15;
    cin>>num15;

    int NextFiveSubtract;
    NextFiveSubtract=num11-num12-num13-num14-num15;

    int addMultiplyAddition;
    addMultiplyAddition=FirstFiveAdd+NextFiveMultiply;

    int finalResult;
    finalResult=addMultiplyAddition-NextFiveSubtract;

    cout<<"The Final Result is: "<<finalResult;
}