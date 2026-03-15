#include <iostream>
using namespace std;

main ( )

{
   
   cout<< " Please enter Your Name : \n " ; 
   string Name;
   cin>>Name;  


  
   cout<< "Please enter your matric marks (out of 1100) : \n " ;
   int matric;
   cin>>matric;

   cout<< "Please enter your inter marks (out of 1200) : \n " ;
   int inter;
   cin>>inter;

   cout<< "Please enter your ecat marks (out of 400) : \n " ;
   int ecat;
   cin>>ecat;

  float M  =20.0/1100*matric;
  float I  =30.0/1200*inter;
  float E  =50.0/400*ecat;

  float Aggregate;
   Aggregate=M+I+E;
  
  cout<< " Your Aggregate score is "<<Aggregate;

}
  