#include<iostream>
using namespace std;
main()
{
    cout<<" Enter score of pointer 2 : " ;
    int pointer2;
    cin>>pointer2;

    cout<<" Enter score of pointer 3 : " ;
    int pointer3;
    cin>>pointer3;

    int round1;
    round1=pointer2*2;
    int round2;
    round2=pointer3*3;

    int totalpoint;
    totalpoint=round1+round2;

    cout<<"Total points = "<<totalpoint;

}