#include<iostream>
using namespace std;
main() 

{  

 cout<<" Enter the size in MB :" ;
 int MB;
 cin>>MB;

 int mb=1024;
 int kb=1024;
 int bytes=8;

 double bits;
 bits=mb*kb*bytes;
 
 cout<<MB <<" MB is equal to "<<bits <<" bits " ;

}
 