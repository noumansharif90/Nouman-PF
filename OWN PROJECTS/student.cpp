#include<iostream>
using namespace std;

main()

{
 
  cout<<" Enter your name : " ;
  string name;
  cin>>name;
 
  cout<<" Enter your roll no : " ;
  int roll_no;
  cin>>roll_no;

  cout<<" Enter your aggregate :" ;
  float aggregate;
  cin>>aggregate;

  cout<<" Enter your section : " ;
  char section;
  cin>>section;


  cout<<"----student Info------\n";
  cout<<" Name:  "<<name <<"\n Roll NO: "<<roll_no <<"\n Aggregate:  "<<aggregate  <<"\n Section: "<<section;
}