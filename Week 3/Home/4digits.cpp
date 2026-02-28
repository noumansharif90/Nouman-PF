#include<iostream>
using namespace std;

main()

{

      cout<<"Enter four digits number:";
      int number;
      cin>>number;      

      int result;
      result=number%10+number/10%10+number/100%10+number/1000%10;
      cout<<"Sum of individual digits: "<<result;

}