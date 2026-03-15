#include<iostream>
using namespace std;

main() 

{

  cout<<" Enter the student name : " ;
  string name;
  cin>>name;

  cout<<" Enter th matric marks ( out of 1100) : ";
  int matric;
  cin>>matric;

  cout<<" Enter the inter marks ( out of 550 ) : " ;
  int inter;
  cin>>inter;

  cout<<" Enter the ecat numbers ( out of 400 ) : " ;
  int ecat; 
  cin>>ecat;
  
  float m=10.0/1100*matric;
  float i=40.0/550*inter;
  float e=50.0/400*ecat;

  float aggregate;
  aggregate=m+i+e;

  cout<<" Aggregate score of Nouman is = "<<aggregate<<"%";
}