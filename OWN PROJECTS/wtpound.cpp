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

  int Matric =10/1100*matric;
  int Inter  =40/1200*inter;
  int Ecat   =50/400*ecat;

  int Aggregate;
  Aggregate=Matric+Inter+Ecat;
  
  cout<< " Your Aggregate score is "<<Aggregate;

}
  