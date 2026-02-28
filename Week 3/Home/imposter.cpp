#include<iostream>
using namespace std;

main()

{

      cout<<" Enter imposter count: ";
      int imposter;
      cin>>imposter;

      cout<<" Enter Players Count : " ;
      int players;
      cin>>players;

      int chance;
      chance=100*imposter/players;
  
      cout<<" Chance being an imposter : "<<chance <<"%" ;
     
}